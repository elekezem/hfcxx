void CGF::addGTOs_sto3g(std::string type, unsigned int z) {
	/* (1) HYDROGEN */
	if(type.compare("1s")==0 && z==1) {
		addGTO_s(3.4252509099999999,0.15432897000000001);
		addGTO_s(0.62391373000000006, 0.53532813999999995);
		addGTO_s(0.16885539999999999, 0.44463454000000002);
	}
	/* (2) HELIUM */
	if(type.compare("1s")==0 && z==2) {
		gtos.push_back(GTO(0.444635,r,0.168856,0,0,0));
		gtos.push_back(GTO(0.535328,r,0.623913,0,0,0));
		gtos.push_back(GTO(0.154329,r,3.42525,0,0,0));
	}
	/* (8) OXYGEN */
	if(type.compare("1s")==0 && z==8) {
		gtos.push_back(GTO(0.15432897000000001,r,130.70931999999999,0,0,0));
		gtos.push_back(GTO(0.53532813999999995,r,23.808861,0,0,0));
		gtos.push_back(GTO(0.44463454000000002,r,6.4436083000000002,0,0,0));
	}
	if(type.compare("2s")==0 && z==8) {
		gtos.push_back(GTO(-0.099967230000000004,r,5.0331513000000001,0,0,0));
		gtos.push_back(GTO(0.39951282999999999,r,1.1695960999999999,0,0,0));
		gtos.push_back(GTO(0.70011546999999996,r,0.38038899999999998,0,0,0));
	}
	if(type.compare("2px")==0 && z==8) {
		gtos.push_back(GTO(0.15591627,r,5.0331513000000001,1,0,0));
		gtos.push_back(GTO(0.60768372000000004,r,1.1695960999999999,1,0,0));
		gtos.push_back(GTO(0.39195739000000002,r,0.38038899999999998,1,0,0));
	}
	if(type.compare("2py")==0 && z==8) {
		gtos.push_back(GTO(0.15591627,r,5.0331513000000001,0,1,0));
		gtos.push_back(GTO(0.60768372000000004,r,1.1695960999999999,0,1,0));
		gtos.push_back(GTO(0.39195739000000002,r,0.38038899999999998,0,1,0));
	}
	if(type.compare("2pz")==0 && z==8) {
		gtos.push_back(GTO(0.15591627,r,5.0331513000000001,0,0,1));
		gtos.push_back(GTO(0.60768372000000004,r,1.1695960999999999,0,0,1));
		gtos.push_back(GTO(0.39195739000000002,r,0.38038899999999998,0,0,1));
	}
}
