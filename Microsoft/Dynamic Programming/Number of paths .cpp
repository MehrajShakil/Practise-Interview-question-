Problem source: https://practice.geeksforgeeks.org/problems/number-of-paths0926/1/?page=1&company[]=Amazon&company[]=Microsoft&company[]=Google&company[]=Flipkart&company[]=Adobe&company[]=Samsung&company[]=Accolite&company[]=MakeMyTrip&company[]=Zoho&company[]=Snapdeal&company[]=Goldman%20Sachs&company[]=Paytm&company[]=Walmart&company[]=Morgan%20Stanley&company[]=OYO%20Rooms&company[]=FactSet&company[]=D-E-Shaw&company[]=Oracle&company[]=Directi&company[]=Hike&company[]=MAQ%20Software&company[]=VMWare&company[]=Qualcomm&company[]=Facebook&company[]=Cisco&company[]=Intuit%20&company[]=Yahoo&company[]=Payu&company[]=Codenation&category[]=Mathematical&category[]=Strings&category[]=Stack&category[]=STL&query=page1company[]Amazoncompany[]Microsoftcompany[]Googlecompany[]Flipkartcompany[]Adobecompany[]Samsungcompany[]Accolitecompany[]MakeMyTripcompany[]Zohocompany[]Snapdealcompany[]Goldman%20Sachscompany[]Paytmcompany[]Walmartcompany[]Morgan%20Stanleycompany[]OYO%20Roomscompany[]FactSetcompany[]D-E-Shawcompany[]Oraclecompany[]Directicompany[]Hikecompany[]MAQ%20Softwarecompany[]VMWarecompany[]Qualcommcompany[]Facebookcompany[]Ciscocompany[]Intuit%20company[]Yahoocompany[]Payucompany[]Codenationcategory[]Mathematicalcategory[]Stringscategory[]Stackcategory[]STL#

long long  numberOfPaths(int m, int n)
{
    int dp[m+1][n+1];
    for ( int i = 0 ; i <= m ; ++i ) {
        for ( int j = 0 ; j <= n ; ++j ) dp[i][j] = 0;
    }
    for ( int i = 1 ; i<=n ; ++i ) {
        dp[1][i] = 1;
    }
    for ( int i = 1 ; i<=m ; ++i ) {
        dp[i][1] = 1;
    }
    for ( int i = 2 ; i<=m ; ++i ) {
        for ( int j = 1 ; j<=n ; ++j ) {
            dp[i][j] = dp[i][j-1] + dp[i-1][j];
        }
    }
    return dp[m][n];
}
