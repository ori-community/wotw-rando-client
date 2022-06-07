#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Objective {
    IL2CPP_REGISTER_METHOD(0x0060FCD0, void, AddObjective, (app::Objective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060FCE0, void, CompleteObjective, (app::Objective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Transform *, get_AreaMapTransform, (app::Objective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_AreaMapTransform, (app::Objective * this_ptr, app::Transform * value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Transform *, get_WorldMapTransform, (app::Objective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_WorldMapTransform, (app::Objective * this_ptr, app::Transform * value))
    IL2CPP_REGISTER_METHOD(0x0060FCF0, app::RuntimeGameWorldArea *, get_Area, (app::Objective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060FD00, void, Show, (app::Objective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006100A0, void, Update, (app::Objective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00610500, void, Hide, (app::Objective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00610670, void, Complete, (app::Objective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00610680, void, SpawnAppearEffect, (app::Objective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::Objective * this_ptr))
}
