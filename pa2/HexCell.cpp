#include "HexCell.h"

#include <cmath>

HexCell::HexCell(int Q, int R) {
    q = Q;
    r = R;
    path_dist_from_start = 0;
}

void HexCell::link(HexCell* cell) {
    /**
     * @todo Your code here!
     */
}

int HexCell::get_neighbour_side(const HexCell* cell) const {
    /**
     * @todo Your code here! You will need to replace the following line.
     */
    return -1;
}

bool HexCell::is_linked(const HexCell* cell) const {
    /**
     * @todo Your code here! You will need to replace the following line.
     */
    return false;
}

int HexCell::distance(const HexCell* cell) const {
    /**
     * @todo Your code here! You will need to replace the following line.
     */
    return -1;
}

bool HexCell::is_edge() const {
    /**
     * @todo Your code here! You will need to replace the following line.
     */
    return false;
}