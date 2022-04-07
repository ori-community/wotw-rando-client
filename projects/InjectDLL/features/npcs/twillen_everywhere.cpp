#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

#include <randomizer/conditions/new_setup_state_override.h>

namespace
{
    void initialize_twillen()
    {
        // Twillen Hollow
        // -294171295 Present
        // -598610927 Gone
        randomizer::conditions::register_new_setup_redirect({ "kwoloksHollowEntrance/interactives/shardTraderSetup", -598610927 }, -294171295);
    }

    CALL_ON_INIT(initialize_twillen);
}
