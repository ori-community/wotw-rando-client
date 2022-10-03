#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityPlaceholder__Class** type_info;
        inline app::EntityPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::EntityPlaceholder__Class>(type_info, "", "EntityPlaceholder");
        }
        inline app::EntityPlaceholder* create() {
            return il2cpp::create_object<app::EntityPlaceholder>(get_class());
        }
        inline app::EntityPlaceholder__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityPlaceholder__Array>(get_class(), size);
        }
    } // namespace EntityPlaceholder
} // namespace app::classes::types
