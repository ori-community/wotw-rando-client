#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ItemInstance__Array {
        namespace {
            app::ItemInstance__Array__Class* type_info_ref = nullptr;
        }
        app::ItemInstance__Array__Class** type_info = &type_info_ref;
        inline app::ItemInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::ItemInstance__Array__Class>(type_info, "PlayFab.ClientModels", "ItemInstance[]");
        }
        inline app::ItemInstance__Array* create() {
            return il2cpp::create_object<app::ItemInstance__Array>(get_class());
        }
    } // namespace ItemInstance__Array
} // namespace app::classes::types
