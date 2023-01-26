#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/IDynamicMetaObjectProvider.h>

namespace app::classes::Newtonsoft::Json::Utilities::DynamicUtils {
    IL2CPP_REGISTER_METHOD(0x01C0E420, app::IEnumerable_1_System_String_*, GetDynamicMemberNames, (app::IDynamicMetaObjectProvider * dynamic_provider))
}
