#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MonoManager_UpdateMode__Enum.h>
#include <Modloader/app/structs/MonoManager.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>

namespace app::classes::ParadoxNotion::Services::MonoManager {
    IL2CPP_REGISTER_METHOD(0x031BF2F0, app::MonoManager_UpdateMode__Enum, get_updateMode, ())
    IL2CPP_REGISTER_METHOD(0x031BF360, void, set_updateMode, (app::MonoManager_UpdateMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x031BF3E0, void, add_onUpdate, (app::MonoManager * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x031BF4D0, void, remove_onUpdate, (app::MonoManager * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x031BF5C0, void, add_onLateUpdate, (app::MonoManager * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x031BF6B0, void, remove_onLateUpdate, (app::MonoManager * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x031BF7A0, void, add_onFixedUpdate, (app::MonoManager * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x031BF890, void, remove_onFixedUpdate, (app::MonoManager * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x031BF980, void, add_onGUI, (app::MonoManager * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x031BFA70, void, remove_onGUI, (app::MonoManager * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x031BFB60, void, add_onApplicationQuit, (app::MonoManager * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x031BFC50, void, remove_onApplicationQuit, (app::MonoManager * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x031BFD40, void, add_onApplicationPause, (app::MonoManager * this_ptr, app::Action_1_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x031BFE30, void, remove_onApplicationPause, (app::MonoManager * this_ptr, app::Action_1_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x031BFF20, app::MonoManager*, get_current, ())
    IL2CPP_REGISTER_METHOD(0x031C01E0, void, Create, ())
    IL2CPP_REGISTER_METHOD(0x031C0270, void, OnApplicationQuit, (app::MonoManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C0310, void, OnApplicationPause, (app::MonoManager * this_ptr, bool is_pause))
    IL2CPP_REGISTER_METHOD(0x031C03B0, void, Awake, (app::MonoManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F506B0, void, Update, (app::MonoManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C06D0, void, LateUpdate, (app::MonoManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C06F0, void, FixedUpdate, (app::MonoManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C0710, void, OnGUI, (app::MonoManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MonoManager * this_ptr))
} // namespace app::classes::ParadoxNotion::Services::MonoManager
