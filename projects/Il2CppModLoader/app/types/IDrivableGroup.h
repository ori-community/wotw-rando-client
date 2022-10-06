#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDrivableGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDrivableGroup__Class** type_info;
        inline app::IDrivableGroup__Class* get_class() {
            return il2cpp::get_class<app::IDrivableGroup__Class>(type_info, "Moon", "IDrivableGroup");
        }
        inline app::IDrivableGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::IDrivableGroup__Array>(get_class(), size);
        }
        inline app::IDrivableGroup__Array* create_array(const std::vector<app::IDrivableGroup*>& items) {
            return il2cpp::array_new<app::IDrivableGroup__Array>(get_class(), items);
        }
    } // namespace IDrivableGroup
} // namespace app::classes::types
