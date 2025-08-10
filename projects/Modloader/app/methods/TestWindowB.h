#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TestWindowB.h>
#include <Modloader/app/structs/TestWindowB_State__Enum.h>
#include <Modloader/app/structs/UIContext.h>

namespace app::classes::TestWindowB {
    IL2CPP_REGISTER_METHOD(0x010E17B0, void, OnEnable, app::TestWindowB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010E1CD0, void, OnDisable, app::TestWindowB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010E21F0, void, Show, app::TestWindowB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010E22B0, void, Hide, app::TestWindowB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010E2370, void, Start, app::TestWindowB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010E2490, void, ChangeState, app::TestWindowB* this_ptr, app::TestWindowB_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x010E25E0, void, EnterInitializedMenu, app::TestWindowB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010E2620, void, ExitInitializedMenu, app::TestWindowB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010E2660, void, FixedUpdate, app::TestWindowB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateInitializedMenu, app::TestWindowB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010E2710, void, OnButtonAPressed, app::TestWindowB* this_ptr, app::UIContext* context)
    IL2CPP_REGISTER_METHOD(0x010E27F0, void, OnButtonBPressed, app::TestWindowB* this_ptr, app::UIContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButtonCPressed, app::TestWindowB* this_ptr, app::UIContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButtonDPressed, app::TestWindowB* this_ptr, app::UIContext* context)
    IL2CPP_REGISTER_METHOD(0x010E17A0, void, ctor, app::TestWindowB* this_ptr)
} // namespace app::classes::TestWindowB
