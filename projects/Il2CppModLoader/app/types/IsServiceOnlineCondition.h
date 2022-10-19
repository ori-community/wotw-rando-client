#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsServiceOnlineCondition {
        namespace {
            inline app::IsServiceOnlineCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsServiceOnlineCondition__Class** type_info = &type_info_ref;
        inline app::IsServiceOnlineCondition__Class* get_class() {
            return il2cpp::get_class<app::IsServiceOnlineCondition__Class>(type_info, "", "IsServiceOnlineCondition");
        }
        inline app::IsServiceOnlineCondition* create() {
            return il2cpp::create_object<app::IsServiceOnlineCondition>(get_class());
        }
    } // namespace IsServiceOnlineCondition
} // namespace app::classes::types
