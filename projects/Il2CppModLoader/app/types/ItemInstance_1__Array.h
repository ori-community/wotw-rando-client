#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ItemInstance_1__Array {
        namespace {
            app::ItemInstance_1__Array__Class* type_info_ref = nullptr;
        }
        app::ItemInstance_1__Array__Class** type_info = &type_info_ref;
        inline app::ItemInstance_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ItemInstance_1__Array__Class>(type_info, "PlayFab.MatchmakerModels", "ItemInstance[]");
        }
        inline app::ItemInstance_1__Array* create() {
            return il2cpp::create_object<app::ItemInstance_1__Array>(get_class());
        }
    } // namespace ItemInstance_1__Array
} // namespace app::classes::types
