//
// Created by deedeeaar on 16/09/2019.
//

#ifndef ITP1_GAME_CPP_COMMON_H
#define ITP1_GAME_CPP_COMMON_H

#define __DEBUG__


#ifdef __DEBUG__
    #define TRACE(x)  (std::cout << (x) << std::endl);
    #define TRACEERR(x)  (std::cerr << (x) << std::endl);
#else
#define TRACE(x)  //std::cout << x << std::endl;
#define TRACEERR(x)  //std::cerr << x << std::endl;
#endif



#endif //ITP1_GAME_CPP_COMMON_H
