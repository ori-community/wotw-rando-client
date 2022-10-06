#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityTargetting {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityTargetting__Class** type_info;
        inline app::EntityTargetting__Class* get_class() {
            return il2cpp::get_class<app::EntityTargetting__Class>(type_info, "", "EntityTargetting");
        }
        inline app::EntityTargetting* create() {
            return il2cpp::create_object<app::EntityTargetting>(get_class());
        }
        inline app::EntityTargetting__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityTargetting__Array>(get_class(), size);
        }
        inline app::EntityTargetting__Array* create_array(const std::vector<app::EntityTargetting*>& items) {
            return il2cpp::array_new<app::EntityTargetting__Array>(get_class(), items);
        }
    } // namespace EntityTargetting
} // namespace app::classes::types
