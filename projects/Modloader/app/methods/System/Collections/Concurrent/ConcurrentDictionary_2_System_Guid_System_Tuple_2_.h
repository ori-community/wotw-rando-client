#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentDictionary_2_System_Guid_System_Tuple_2_.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Tuple_2_Guid_Int32_.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_System_Guid_System_Tuple_2_ {
    IL2CPP_REGISTER_METHOD(0x02ADEA70, bool, TryGetValue, (app::ConcurrentDictionary_2_System_Guid_System_Tuple_2_ * this_ptr, app::Guid key, app::Tuple_2_Guid_Int32_** value))
    IL2CPP_REGISTER_METHOD(0x02AE06F0, void, set_Item, (app::ConcurrentDictionary_2_System_Guid_System_Tuple_2_ * this_ptr, app::Guid key, app::Tuple_2_Guid_Int32_* value))
    IL2CPP_REGISTER_METHOD(0x02ADDC30, void, ctor, (app::ConcurrentDictionary_2_System_Guid_System_Tuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADE3D0, bool, TryRemove, (app::ConcurrentDictionary_2_System_Guid_System_Tuple_2_ * this_ptr, app::Guid key, app::Tuple_2_Guid_Int32_** value))
} // namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_System_Guid_System_Tuple_2_
