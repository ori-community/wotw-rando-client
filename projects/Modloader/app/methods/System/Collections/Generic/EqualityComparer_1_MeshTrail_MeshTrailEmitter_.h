#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_MeshTrail_MeshTrailEmitter_.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_MeshTrail_MeshTrailEmitter_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_MeshTrail_MeshTrailEmitter_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02CD9840, app::EqualityComparer_1_MeshTrail_MeshTrailEmitter_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B5E090,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_MeshTrail_MeshTrailEmitter_* this_ptr,
        app::MeshTrail_MeshTrailEmitter__Array* array,
        app::MeshTrail_MeshTrailEmitter value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B5E1C0,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_MeshTrail_MeshTrailEmitter_* this_ptr,
        app::MeshTrail_MeshTrailEmitter__Array* array,
        app::MeshTrail_MeshTrailEmitter value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02B5E2E0, int32_t, IEqualityComparer_GetHashCode, app::EqualityComparer_1_MeshTrail_MeshTrailEmitter_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x02B5E400,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_MeshTrail_MeshTrailEmitter_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_MeshTrail_MeshTrailEmitter_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_MeshTrail_MeshTrailEmitter_
