#include "task.h"

bool find_way(size_t *array, size_t x, size_t y, size_t point_x, size_t point_y)
{
    bool move_x = false , move_y = false;


    if((point_x < x && point_y < y) && (array[point_x * y + point_y] == 1)){
        if((x * y - 1) == (point_x * y + point_y) && (array[point_x * y + point_y] == 1)){
            return true;
        }
        move_x = find_way(array, x, y, point_x + 1, point_y);
        move_y = find_way(array, x, y, point_x, point_y + 1);
        if(move_x || move_y){
            return true;
        } else {
            return false;
        }
        
    }else{
        return false;
    }
}

bool find_true_way(size_t *array, size_t x, size_t y, bool show)
{
    bool result = false;
    if(x < 2 || x > 50){
        return false;
    }

    if(y < 2 || y > 50){
        return false;
    }
    
    if(show){
    	for (size_t i = 0; i < x; ++i) {
    		for (size_t j = 0; j < y; ++j) {
            	std::cout << std::setw( 3 ) << array[i * y + j];
            }
            std::cout << std::endl;
        }
    }

    result = find_way(array, x, y, 0, 0);
    return result;
}
