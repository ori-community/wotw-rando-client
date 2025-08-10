#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SeinPowerslideSpell_FireTrailPoint_.h>
#include <Modloader/app/structs/Predicate_1_SeinPowerslideSpell_FireTrailPoint_.h>
#include <Modloader/app/structs/SeinPowerslideSpell_FireTrailPoint.h>

namespace app::classes::System::Collections::Generic::List_1_SeinPowerslideSpell_FireTrailPoint_ {
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::SeinPowerslideSpell_FireTrailPoint*,
        get_Item,
        app::List_1_SeinPowerslideSpell_FireTrailPoint_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_SeinPowerslideSpell_FireTrailPoint_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1EFE0,
        int32_t,
        RemoveAll,
        app::List_1_SeinPowerslideSpell_FireTrailPoint_* this_ptr,
        app::Predicate_1_SeinPowerslideSpell_FireTrailPoint_* match
    )
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_SeinPowerslideSpell_FireTrailPoint_* this_ptr, app::SeinPowerslideSpell_FireTrailPoint* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_SeinPowerslideSpell_FireTrailPoint_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_SeinPowerslideSpell_FireTrailPoint_
