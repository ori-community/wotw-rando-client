#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_WorldMapAreaState_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_WorldMapAreaState_.h>
#include <Modloader/app/structs/WorldMapAreaState__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_WorldMapAreaState_ {
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC6E0, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_WorldMapAreaState_, GetEnumerator, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr, int32_t key, app::WorldMapAreaState__Enum value))
    IL2CPP_REGISTER_METHOD(0x02BADFC0, bool, TryGetValue, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr, int32_t key, app::WorldMapAreaState__Enum* value))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr, int32_t key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_WorldMapAreaState_
