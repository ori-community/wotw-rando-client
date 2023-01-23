#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_MeshTrail_MeshTrailEmitter_.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_MeshTrail_MeshTrailEmitter_ {
    IL2CPP_REGISTER_METHOD(0x0243A6F0, bool, Equals_1, (app::ObjectEqualityComparer_1_MeshTrail_MeshTrailEmitter_ * this_ptr, app::MeshTrail_MeshTrailEmitter x, app::MeshTrail_MeshTrailEmitter y))
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_MeshTrail_MeshTrailEmitter_ * this_ptr, app::MeshTrail_MeshTrailEmitter obj))
    IL2CPP_REGISTER_METHOD(0x0243A7D0, int32_t, IndexOf, (app::ObjectEqualityComparer_1_MeshTrail_MeshTrailEmitter_ * this_ptr, app::MeshTrail_MeshTrailEmitter__Array* array, app::MeshTrail_MeshTrailEmitter value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0243A980, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_MeshTrail_MeshTrailEmitter_ * this_ptr, app::MeshTrail_MeshTrailEmitter__Array* array, app::MeshTrail_MeshTrailEmitter value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_MeshTrail_MeshTrailEmitter_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_MeshTrail_MeshTrailEmitter_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_MeshTrail_MeshTrailEmitter_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_MeshTrail_MeshTrailEmitter_
