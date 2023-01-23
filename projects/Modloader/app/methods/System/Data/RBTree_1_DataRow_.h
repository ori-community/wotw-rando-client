#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RBTree_1_DataRow_.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/DataRow__Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/TreeAccessMethod__Enum.h>

namespace app::classes::System::Data::RBTree_1_DataRow_ {
    IL2CPP_REGISTER_METHOD(0x02FB04C0, int32_t, get_Count, (app::RBTree_1_DataRow_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747860, RBTree_1_DataRow__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB3CE0, app::DataRow*, get_Item, (app::RBTree_1_DataRow_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474BD20, RBTree_1_DataRow__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB4AE0, void, RemoveAt, (app::RBTree_1_DataRow_ * this_ptr, int32_t position))
    IL2CPP_REGISTER_METHODINFO(0x0470EF90, RBTree_1_DataRow__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB4770, int32_t, Add, (app::RBTree_1_DataRow_ * this_ptr, app::DataRow* item))
    IL2CPP_REGISTER_METHODINFO(0x0477EB58, RBTree_1_DataRow__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB9EF0, int32_t, IndexOf, (app::RBTree_1_DataRow_ * this_ptr, int32_t node_id, app::DataRow* item))
    IL2CPP_REGISTER_METHODINFO(0x0472DC50, RBTree_1_DataRow__IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB4A10, int32_t, Insert, (app::RBTree_1_DataRow_ * this_ptr, int32_t position, app::DataRow* item))
    IL2CPP_REGISTER_METHODINFO(0x0470DF48, RBTree_1_DataRow__Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB4B10, void, Clear, (app::RBTree_1_DataRow_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F860, RBTree_1_DataRow__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB2550, int32_t, RBDelete, (app::RBTree_1_DataRow_ * this_ptr, int32_t z_id))
    IL2CPP_REGISTER_METHODINFO(0x04775950, RBTree_1_DataRow__RBDelete__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FBA090, void, CopyTo_1, (app::RBTree_1_DataRow_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0475E170, RBTree_1_DataRow__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FBA280, void, CopyTo_2, (app::RBTree_1_DataRow_ * this_ptr, app::DataRow__Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04786B80, RBTree_1_DataRow__CopyTo_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB9E60, app::IEnumerator*, GetEnumerator, (app::RBTree_1_DataRow_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725028, RBTree_1_DataRow__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FAF680, void, ctor, (app::RBTree_1_DataRow_ * this_ptr, app::TreeAccessMethod__Enum access_method))
    IL2CPP_REGISTER_METHODINFO(0x0476C7C0, RBTree_1_DataRow___ctor__MethodInfo)
} // namespace app::classes::System::Data::RBTree_1_DataRow_
