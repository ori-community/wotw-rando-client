#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Comparison_1_ExternalForceEntry_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_ExternalForceEntry_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B876E0, int32_t, Invoke, (app::Comparison_1_ExternalForceEntry_ * this_ptr, app::ExternalForceEntry x, app::ExternalForceEntry y))
    IL2CPP_REGISTER_METHOD(0x02B87EB0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_ExternalForceEntry_ * this_ptr, app::ExternalForceEntry x, app::ExternalForceEntry y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_ExternalForceEntry_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_ExternalForceEntry_
