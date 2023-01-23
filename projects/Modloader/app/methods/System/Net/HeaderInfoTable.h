#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/HeaderInfo.h>
#include <Modloader/app/structs/HeaderInfoTable.h>

namespace app::classes::System::Net::HeaderInfoTable {
    IL2CPP_REGISTER_METHOD(0x01D38EE0, app::String__Array*, ParseSingleValue, (app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04702BF0, HeaderInfoTable_ParseSingleValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D38FD0, app::String__Array*, ParseMultiValue, (app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04743190, HeaderInfoTable_ParseMultiValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D39420, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01D3D1B0, app::HeaderInfo*, get_Item, (app::HeaderInfoTable * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HeaderInfoTable * this_ptr))
} // namespace app::classes::System::Net::HeaderInfoTable
