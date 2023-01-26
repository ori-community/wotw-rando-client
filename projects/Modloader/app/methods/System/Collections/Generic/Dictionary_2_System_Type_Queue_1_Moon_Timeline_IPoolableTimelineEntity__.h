#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_.h>
#include <Modloader/app/structs/Queue_1_Moon_Timeline_IPoolableTimelineEntity_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity__ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * this_ptr, app::Type* key, app::Queue_1_Moon_Timeline_IPoolableTimelineEntity_* value))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::Queue_1_Moon_Timeline_IPoolableTimelineEntity_*, get_Item, (app::Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity__
