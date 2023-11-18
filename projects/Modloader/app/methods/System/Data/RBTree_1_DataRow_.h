#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RBTree_1_DataRow_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRow__Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/TreeAccessMethod__Enum.h>

namespace app::classes::System::Data::RBTree_1_DataRow_ {
    IL2CPP_REGISTER_METHOD(0x02FB04C0, int32_t, get_Count, (app::RBTree_1_DataRow_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FB3CE0, app::DataRow*, get_Item, (app::RBTree_1_DataRow_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02FB4AE0, void, RemoveAt, (app::RBTree_1_DataRow_ * this_ptr, int32_t position))
    IL2CPP_REGISTER_METHOD(0x02FB4770, int32_t, Add, (app::RBTree_1_DataRow_ * this_ptr, app::DataRow* item))
    IL2CPP_REGISTER_METHOD(0x02FB9EF0, int32_t, IndexOf, (app::RBTree_1_DataRow_ * this_ptr, int32_t node_id, app::DataRow* item))
    IL2CPP_REGISTER_METHOD(0x02FB4A10, int32_t, Insert, (app::RBTree_1_DataRow_ * this_ptr, int32_t position, app::DataRow* item))
    IL2CPP_REGISTER_METHOD(0x02FB4B10, void, Clear, (app::RBTree_1_DataRow_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FB2550, int32_t, RBDelete, (app::RBTree_1_DataRow_ * this_ptr, int32_t z_id))
    IL2CPP_REGISTER_METHOD(0x02FBA090, void, CopyTo_1, (app::RBTree_1_DataRow_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02FBA280, void, CopyTo_2, (app::RBTree_1_DataRow_ * this_ptr, app::DataRow__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02FB9E60, app::IEnumerator*, GetEnumerator, (app::RBTree_1_DataRow_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAF680, void, ctor, (app::RBTree_1_DataRow_ * this_ptr, app::TreeAccessMethod__Enum access_method))
} // namespace app::classes::System::Data::RBTree_1_DataRow_
