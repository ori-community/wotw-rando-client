#include <randomizer/conditions/condition_override.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace
{
    void initialize()
    {
        randomizer::conditions::register_condition_intercept("swampTorchIntroductionA/npcSetup",
            [](std::string_view path, void* obj) { return true; });
    }

    CALL_ON_INIT(initialize);
}
