                                                  
                                          ##Arrays_String 


Second largest 
                                                                
    int maxi=*max_element(a.begin(),a.end());
    for(int i=0;i<n;i++) if(a[i]==maxi) a[i]=-1;
    cout<<*max_element(a.begin(),a.end()); //now the new max element will be our second largest coz we've backed the largest one
    
and iske alawa     sets ka use krke bhi {EASIEST}