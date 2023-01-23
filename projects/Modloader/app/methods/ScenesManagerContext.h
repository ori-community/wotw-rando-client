#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_SceneManagerScene_.h>
#include <Modloader/app/structs/ScenesManagerContext.h>
#include <Modloader/app/structs/ScenesManagerSettings.h>

namespace app::classes::ScenesManagerContext {
    IL2CPP_REGISTER_METHOD(0x010648A0, app::List_1_SceneManagerScene_*, get_ActiveScenes, (app::ScenesManagerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010648C0, app::ScenesManagerSettings*, get_Settings, (app::ScenesManagerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ScenesManagerContext * this_ptr))
} // namespace app::classes::ScenesManagerContext
