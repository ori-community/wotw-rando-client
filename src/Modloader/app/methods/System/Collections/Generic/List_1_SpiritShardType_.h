#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_SpiritShardType_.h>
#include <Modloader/app/structs/List_1_SpiritShardType_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SpiritShardType_.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>

namespace app::classes::System::Collections::Generic::List_1_SpiritShardType_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_SpiritShardType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F51B80, app::List_1_T_Enumerator_SpiritShardType_, GetEnumerator, app::List_1_SpiritShardType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_SpiritShardType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F53730, void, ctor_2, app::List_1_SpiritShardType_* this_ptr, app::IEnumerable_1_SpiritShardType_* collection)
    IL2CPP_REGISTER_METHOD(0x02F51080, void, Add, app::List_1_SpiritShardType_* this_ptr, app::SpiritShardType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02F51330, bool, Contains, app::List_1_SpiritShardType_* this_ptr, app::SpiritShardType__Enum item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_SpiritShardType_* this_ptr, app::SpiritShardType__Enum item)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_3, app::List_1_SpiritShardType_* this_ptr, int32_t capacity)
} // namespace app::classes::System::Collections::Generic::List_1_SpiritShardType_
