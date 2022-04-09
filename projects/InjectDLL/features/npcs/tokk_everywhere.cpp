#include <randomizer/conditions/new_setup_state_override.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    void initialize_tokk()
    {
        // Upper Marsh
        // 1808259966 Present
        // 1558151251 Gone
        randomizer::conditions::register_new_setup_redirect({ "swampWalljumpChallengeA/NPCSetup", 1558151251 }, 1808259966);
    }

    CALL_ON_INIT(initialize_tokk);
}
