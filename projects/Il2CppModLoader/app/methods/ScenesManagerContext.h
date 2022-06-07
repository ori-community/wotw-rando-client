#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ScenesManagerContext {
    IL2CPP_REGISTER_METHOD(0x010648A0, app::List_1_SceneManagerScene_ *, get_ActiveScenes, (app::ScenesManagerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010648C0, app::ScenesManagerSettings *, get_Settings, (app::ScenesManagerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ScenesManagerContext * this_ptr))
}
