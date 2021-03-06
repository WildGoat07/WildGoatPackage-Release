#ifndef DEF_ENVIRONNEMENT_HPP
#define DEF_ENVIRONNEMENT_HPP
#include "../Various.hpp"

namespace wp
{
    namespace gui
    {
        /////////////////////////////////////////////////
                /// \brief Base resource.
        ///
        ///Needed by all widget. Create one per application and create any widget out of it.
        ///
        ///\class Resource
        /////////////////////////////////////////////////
        class Resource
        {
        public:
            sf::Font font;
            unsigned int const textSize = 13;
            sf::RenderWindow& handle;
            Resource(sf::RenderWindow& h) :
                handle(h)
            {
                font = Various::loadFontFromResource("wpGuiFont");
            }
        };
    }
}

#endif // DEF_ENVIRONNEMENT_HPP
