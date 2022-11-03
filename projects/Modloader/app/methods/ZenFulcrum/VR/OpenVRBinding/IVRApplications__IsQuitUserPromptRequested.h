#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__IsQuitUserPromptRequested {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_IsQuitUserPromptRequested * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x008A18F0, bool, Invoke, (app::IVRApplications_IsQuitUserPromptRequested * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_IsQuitUserPromptRequested * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRApplications_IsQuitUserPromptRequested * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__IsQuitUserPromptRequested
