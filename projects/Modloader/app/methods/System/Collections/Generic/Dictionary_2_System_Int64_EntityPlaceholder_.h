#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int64_EntityPlaceholder_.h>
#include <Modloader/app/structs/EntityPlaceholder.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int64_EntityPlaceholder_ {
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int64_EntityPlaceholder_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int64_EntityPlaceholder_ * this_ptr, int64_t key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int64_EntityPlaceholder_ * this_ptr, int64_t key, app::EntityPlaceholder* value))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int64_EntityPlaceholder_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C3E9A0, app::EntityPlaceholder*, get_Item, (app::Dictionary_2_System_Int64_EntityPlaceholder_ * this_ptr, int64_t key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int64_EntityPlaceholder_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int64_EntityPlaceholder_
