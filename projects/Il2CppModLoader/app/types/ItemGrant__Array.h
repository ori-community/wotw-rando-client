#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ItemGrant__Array {
        namespace {
            inline app::ItemGrant__Array__Class* type_info_ref = nullptr;
        }
        inline app::ItemGrant__Array__Class** type_info = &type_info_ref;
        inline app::ItemGrant__Array__Class* get_class() {
            return il2cpp::get_class<app::ItemGrant__Array__Class>(type_info, "PlayFab.ServerModels", "ItemGrant[]");
        }
        inline app::ItemGrant__Array* create() {
            return il2cpp::create_object<app::ItemGrant__Array>(get_class());
        }
    } // namespace ItemGrant__Array
} // namespace app::classes::types
