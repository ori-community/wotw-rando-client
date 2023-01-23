#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_Link_Link_.h>
#include <Modloader/app/structs/Link.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Link_Link_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_Link_Link_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C808, Dictionary_2_Link_Link__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::Link*, get_Item, (app::Dictionary_2_Link_Link_ * this_ptr, app::Link* key))
    IL2CPP_REGISTER_METHODINFO(0x0473D320, Dictionary_2_Link_Link__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_Link_Link_ * this_ptr, app::Link* key, app::Link* value))
    IL2CPP_REGISTER_METHODINFO(0x0474E838, Dictionary_2_Link_Link__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Link_Link_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763E48, Dictionary_2_Link_Link___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Link_Link_
