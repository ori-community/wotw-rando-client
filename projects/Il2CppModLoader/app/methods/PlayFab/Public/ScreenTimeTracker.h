#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::Public::ScreenTimeTracker {
    IL2CPP_REGISTER_METHOD(0x01AD30C0, void, ClientSessionStart, (app::ScreenTimeTracker * this_ptr, app::String * entity_id, app::String * entity_type, app::String * play_fab_user_id))
    IL2CPP_REGISTER_METHOD(0x01AD35E0, void, OnApplicationFocus, (app::ScreenTimeTracker * this_ptr, bool is_focused))
    IL2CPP_REGISTER_METHOD(0x01AD3B10, void, Send, (app::ScreenTimeTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EventSentSuccessfulCallback, (app::ScreenTimeTracker * this_ptr, app::WriteEventsResponse * response))
    IL2CPP_REGISTER_METHODINFO(0x04730B90, ScreenTimeTracker_EventSentSuccessfulCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EventSentErrorCallback, (app::ScreenTimeTracker * this_ptr, app::PlayFabError * response))
    IL2CPP_REGISTER_METHODINFO(0x047737F0, ScreenTimeTracker_EventSentErrorCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::ScreenTimeTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, (app::ScreenTimeTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::ScreenTimeTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AD4130, void, OnApplicationQuit, (app::ScreenTimeTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AD4140, void, ctor, (app::ScreenTimeTracker * this_ptr))
}
