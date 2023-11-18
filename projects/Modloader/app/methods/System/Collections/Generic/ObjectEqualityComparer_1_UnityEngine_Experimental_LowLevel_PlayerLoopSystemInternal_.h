#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayerLoopSystemInternal.h>
#include <Modloader/app/structs/PlayerLoopSystemInternal__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ {
    IL2CPP_REGISTER_METHOD(0x01CD2D60, bool, Equals_1, (app::ObjectEqualityComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * this_ptr, app::PlayerLoopSystemInternal x, app::PlayerLoopSystemInternal y))
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * this_ptr, app::PlayerLoopSystemInternal obj))
    IL2CPP_REGISTER_METHOD(0x01CD2E30, int32_t, IndexOf, (app::ObjectEqualityComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * this_ptr, app::PlayerLoopSystemInternal__Array* array, app::PlayerLoopSystemInternal value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CD2FD0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * this_ptr, app::PlayerLoopSystemInternal__Array* array, app::PlayerLoopSystemInternal value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_
