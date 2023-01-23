#include <Randomizer/conditions/new_setup_state_override.h>

#include <Modloader/common.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>

namespace {
    void initialize_tokk() {
        // Upper Marsh
        // 1808259966 Present
        // 1558151251 Gone
        randomizer::conditions::register_new_setup_redirect({ "swampWalljumpChallengeA/NPCSetup", 1558151251 }, 1808259966);
    }

    CALL_ON_INIT(initialize_tokk);
} // namespace
