#pragma once

namespace uiuc {
    class Cube {
        public:
            double getVolume();
            double getSurfaceArea();
            void setLength(double length);

            Cube(); // custom default constructor

        private:
            double length_;
    };
};
