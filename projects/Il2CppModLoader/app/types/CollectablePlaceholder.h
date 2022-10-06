#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollectablePlaceholder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CollectablePlaceholder__Class** type_info;
        inline app::CollectablePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CollectablePlaceholder__Class>(type_info, "", "CollectablePlaceholder");
        }
        inline app::CollectablePlaceholder* create() {
            return il2cpp::create_object<app::CollectablePlaceholder>(get_class());
        }
        inline app::CollectablePlaceholder__Array* create_array(int size) {
            return il2cpp::array_new<app::CollectablePlaceholder__Array>(get_class(), size);
        }
        inline app::CollectablePlaceholder__Array* create_array(const std::vector<app::CollectablePlaceholder*>& items) {
            return il2cpp::array_new<app::CollectablePlaceholder__Array>(get_class(), items);
        }
    } // namespace CollectablePlaceholder
} // namespace app::classes::types
