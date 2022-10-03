#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlockableLaser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BlockableLaser__Class** type_info;
        inline app::BlockableLaser__Class* get_class() {
            return il2cpp::get_class<app::BlockableLaser__Class>(type_info, "", "BlockableLaser");
        }
        inline app::BlockableLaser* create() {
            return il2cpp::create_object<app::BlockableLaser>(get_class());
        }
        inline app::BlockableLaser__Array* create_array(int size) {
            return il2cpp::array_new<app::BlockableLaser__Array>(get_class(), size);
        }
    } // namespace BlockableLaser
} // namespace app::classes::types
