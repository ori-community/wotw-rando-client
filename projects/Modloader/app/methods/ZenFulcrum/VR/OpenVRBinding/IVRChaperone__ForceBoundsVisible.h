#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__ForceBoundsVisible {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperone_ForceBoundsVisible * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::IVRChaperone_ForceBoundsVisible * this_ptr, bool b_force))
    IL2CPP_REGISTER_METHOD(0x02F3F700, app::IAsyncResult*, BeginInvoke, (app::IVRChaperone_ForceBoundsVisible * this_ptr, bool b_force, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRChaperone_ForceBoundsVisible * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__ForceBoundsVisible
