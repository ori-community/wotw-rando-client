#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeQuest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeQuest__Class** type_info;
        inline app::RuntimeQuest__Class* get_class() {
            return il2cpp::get_class<app::RuntimeQuest__Class>(type_info, "", "RuntimeQuest");
        }
        inline app::RuntimeQuest* create() {
            return il2cpp::create_object<app::RuntimeQuest>(get_class());
        }
        inline app::RuntimeQuest__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeQuest__Array>(get_class(), size);
        }
    } // namespace RuntimeQuest
} // namespace app::classes::types
