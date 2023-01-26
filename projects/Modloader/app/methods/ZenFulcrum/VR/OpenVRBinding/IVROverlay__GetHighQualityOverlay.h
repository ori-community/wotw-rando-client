#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVROverlay_GetHighQualityOverlay.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetHighQualityOverlay {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetHighQualityOverlay * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01938310, uint64_t, Invoke, (app::IVROverlay_GetHighQualityOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetHighQualityOverlay * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, uint64_t, EndInvoke, (app::IVROverlay_GetHighQualityOverlay * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetHighQualityOverlay
