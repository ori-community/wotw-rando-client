#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Targets_ConsumerList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Targets_ConsumerList__Class** type_info;
        inline app::Targets_ConsumerList__Class* get_class() {
            return il2cpp::get_nested_class<app::Targets_ConsumerList__Class>(type_info, "Game", "Targets", "ConsumerList");
        }
        inline app::Targets_ConsumerList* create() {
            return il2cpp::create_object<app::Targets_ConsumerList>(get_class());
        }
        inline app::Targets_ConsumerList__Array* create_array(int size) {
            return il2cpp::array_new<app::Targets_ConsumerList__Array>(get_class(), size);
        }
        inline app::Targets_ConsumerList__Array* create_array(const std::vector<app::Targets_ConsumerList*>& items) {
            return il2cpp::array_new<app::Targets_ConsumerList__Array>(get_class(), items);
        }
    } // namespace Targets_ConsumerList
} // namespace app::classes::types
