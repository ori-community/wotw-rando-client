#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ItemInstance_1 {
        namespace {
            app::ItemInstance_1__Class* type_info_ref = nullptr;
        }
        app::ItemInstance_1__Class** type_info = &type_info_ref;
        inline app::ItemInstance_1__Class* get_class() {
            return il2cpp::get_class<app::ItemInstance_1__Class>(type_info, "PlayFab.MatchmakerModels", "ItemInstance");
        }
        inline app::ItemInstance_1* create() {
            return il2cpp::create_object<app::ItemInstance_1>(get_class());
        }
        inline app::ItemInstance_1__Array* create_array(int size) {
            return il2cpp::array_new<app::ItemInstance_1__Array>(get_class(), size);
        }
    } // namespace ItemInstance_1
} // namespace app::classes::types
