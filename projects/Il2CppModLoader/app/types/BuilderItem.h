#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuilderItem__Class** type_info;
        inline app::BuilderItem__Class* get_class() {
            return il2cpp::get_class<app::BuilderItem__Class>(type_info, "", "BuilderItem");
        }
        inline app::BuilderItem* create() {
            return il2cpp::create_object<app::BuilderItem>(get_class());
        }
        inline app::BuilderItem__Array* create_array(int size) {
            return il2cpp::array_new<app::BuilderItem__Array>(get_class(), size);
        }
        inline app::BuilderItem__Array* create_array(const std::vector<app::BuilderItem*>& items) {
            return il2cpp::array_new<app::BuilderItem__Array>(get_class(), items);
        }
    } // namespace BuilderItem
} // namespace app::classes::types
