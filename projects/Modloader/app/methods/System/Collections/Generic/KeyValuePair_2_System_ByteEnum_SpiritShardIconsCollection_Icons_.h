#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_ByteEnum_SpiritShardIconsCollection_Icons___Boxed.h>
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_ByteEnum_SpiritShardIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(0x0014FE00, void, ctor, (app::KeyValuePair_2_System_ByteEnum_SpiritShardIconsCollection_Icons___Boxed * this_ptr, app::ByteEnum__Enum key, app::SpiritShardIconsCollection_Icons value))
    IL2CPP_REGISTER_METHOD(0x0010E100, app::ByteEnum__Enum, get_Key, (app::KeyValuePair_2_System_ByteEnum_SpiritShardIconsCollection_Icons___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014FE20, app::SpiritShardIconsCollection_Icons, get_Value, (app::KeyValuePair_2_System_ByteEnum_SpiritShardIconsCollection_Icons___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014FE40, app::String*, ToString, (app::KeyValuePair_2_System_ByteEnum_SpiritShardIconsCollection_Icons___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_ByteEnum_SpiritShardIconsCollection_Icons_
