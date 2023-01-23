#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DataView_DataRowReferenceComparer.h>
#include <Modloader/app/structs/DataRow.h>

namespace app::classes::System::Data::DataView_DataRowReferenceComparer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DataView_DataRowReferenceComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01652210, bool, Equals, (app::DataView_DataRowReferenceComparer * this_ptr, app::DataRow* x, app::DataRow* y))
    IL2CPP_REGISTER_METHOD(0x01F47520, int32_t, GetHashCode, (app::DataView_DataRowReferenceComparer * this_ptr, app::DataRow* obj))
    IL2CPP_REGISTER_METHOD(0x01F47540, void, cctor, ())
} // namespace app::classes::System::Data::DataView_DataRowReferenceComparer
