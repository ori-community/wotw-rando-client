#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrefabPlaceholder {
        namespace {
            app::PrefabPlaceholder__Class* type_info_ref = nullptr;
        }
        app::PrefabPlaceholder__Class** type_info = &type_info_ref;
        inline app::PrefabPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::PrefabPlaceholder__Class>(type_info, "", "PrefabPlaceholder");
        }
        inline app::PrefabPlaceholder* create() {
            return il2cpp::create_object<app::PrefabPlaceholder>(get_class());
        }
    } // namespace PrefabPlaceholder
} // namespace app::classes::types
