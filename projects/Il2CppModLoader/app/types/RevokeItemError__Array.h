#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RevokeItemError__Array {
        namespace {
            inline app::RevokeItemError__Array__Class* type_info_ref = nullptr;
        }
        inline app::RevokeItemError__Array__Class** type_info = &type_info_ref;
        inline app::RevokeItemError__Array__Class* get_class() {
            return il2cpp::get_class<app::RevokeItemError__Array__Class>(type_info, "PlayFab.ServerModels", "RevokeItemError[]");
        }
        inline app::RevokeItemError__Array* create() {
            return il2cpp::create_object<app::RevokeItemError__Array>(get_class());
        }
    } // namespace RevokeItemError__Array
} // namespace app::classes::types
