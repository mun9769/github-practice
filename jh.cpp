	myCar.Tnl_jugement = 0;
			Waypoint(myCar, myCar.Current, Mapinfo.Path, myCar.NearestPoint);
			myCar.alpha = atan2((Mapinfo.Path[myCar.WayPoint][0] - myCar.Current[0]), (Mapinfo.Path[myCar.WayPoint][1] - myCar.Current[1]));
			myCar.alpha = myCar.alpha - DegToRad(myCar.Heading);
			myCar.LD = Normalize(Mapinfo.Path[myCar.WayPoint], Mapinfo.Path[myCar.NearestPoint]);