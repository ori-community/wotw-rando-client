#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Comparison_1_MeshTrail_MeshTrailEmitter_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_MeshTrail_MeshTrailEmitter_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B89D50, int32_t, Invoke, (app::Comparison_1_MeshTrail_MeshTrailEmitter_ * this_ptr, app::MeshTrail_MeshTrailEmitter x, app::MeshTrail_MeshTrailEmitter y))
    IL2CPP_REGISTER_METHOD(0x02B8A5E0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_MeshTrail_MeshTrailEmitter_ * this_ptr, app::MeshTrail_MeshTrailEmitter x, app::MeshTrail_MeshTrailEmitter y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_MeshTrail_MeshTrailEmitter_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_MeshTrail_MeshTrailEmitter_
