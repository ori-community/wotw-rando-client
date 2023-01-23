#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RecordManager.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRow__Array.h>

namespace app::classes::System::Data::RecordManager {
    IL2CPP_REGISTER_METHOD(0x01E49910, void, ctor, (app::RecordManager * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHODINFO(0x0471AF58, RecordManager__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E49B50, void, GrowRecordCapacity, (app::RecordManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_LastFreeRecord, (app::RecordManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_MinimumCapacity, (app::RecordManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E49DD0, void, set_MinimumCapacity, (app::RecordManager * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x0470F788, RecordManager_set_MinimumCapacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_RecordCapacity, (app::RecordManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E49E80, void, set_RecordCapacity, (app::RecordManager * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01E49F70, int32_t, NewCapacity, (int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x01E49F90, int32_t, NormalizedMinimumCapacity, (app::RecordManager * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x01E49FD0, int32_t, NewRecordBase, (app::RecordManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E4A0E0, void, FreeRecord, (app::RecordManager * this_ptr, int32_t* record))
    IL2CPP_REGISTER_METHOD(0x01E4A310, void, Clear, (app::RecordManager * this_ptr, bool clear_all))
    IL2CPP_REGISTER_METHOD(0x01E4A710, app::DataRow*, get_Item, (app::RecordManager * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x01E4A750, void, set_Item, (app::RecordManager * this_ptr, int32_t record, app::DataRow* value))
    IL2CPP_REGISTER_METHOD(0x01E4A7D0, int32_t, ImportRecord, (app::RecordManager * this_ptr, app::DataTable* src, int32_t record))
    IL2CPP_REGISTER_METHOD(0x01E4A7F0, int32_t, CopyRecord, (app::RecordManager * this_ptr, app::DataTable* src, int32_t record, int32_t copy))
    IL2CPP_REGISTER_METHODINFO(0x04714750, RecordManager_CopyRecord__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E4AB00, void, SetRowCache, (app::RecordManager * this_ptr, app::DataRow__Array* new_rows))
} // namespace app::classes::System::Data::RecordManager
