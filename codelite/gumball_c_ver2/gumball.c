
	{
		if ( ptr->num_gumballs > 0 )
		{
			ptr->num_gumballs-- ;
			ptr->has_quarter = 0 ;
			printf( "Thanks for your quarter.  Gumball Ejected!\n" ) ;
		}
		else
		{
			printf( "No More Gumballs!  Sorry, can't return your quarter.\n" ) ;
		}
	}
	else 
	{
		printf( "Please insert a quarter\n" ) ;
	}
		ptr->has_quarter = 1 ;
	else 
		ptr->has_quarter = 0 ;