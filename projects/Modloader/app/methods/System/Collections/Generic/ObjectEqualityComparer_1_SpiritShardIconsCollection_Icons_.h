#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_SpiritShardIconsCollection_Icons_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_SpiritShardIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(0x01CD2410, bool, Equals_1, (app::ObjectEqualityComparer_1_SpiritShardIconsCollection_Icons_ * this_ptr, app::SpiritShardIconsCollection_Icons x, app::SpiritShardIconsCollection_Icons y))
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_SpiritShardIconsCollection_Icons_ * this_ptr, app::SpiritShardIconsCollection_Icons obj))
    IL2CPP_REGISTER_METHOD(0x01CD24D0, int32_t, IndexOf, (app::ObjectEqualityComparer_1_SpiritShardIconsCollection_Icons_ * this_ptr, app::SpiritShardIconsCollection_Icons__Array* array, app::SpiritShardIconsCollection_Icons value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CD2660, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_SpiritShardIconsCollection_Icons_ * this_ptr, app::SpiritShardIconsCollection_Icons__Array* array, app::SpiritShardIconsCollection_Icons value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_SpiritShardIconsCollection_Icons_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_SpiritShardIconsCollection_Icons_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_SpiritShardIconsCollection_Icons_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_SpiritShardIconsCollection_Icons_
