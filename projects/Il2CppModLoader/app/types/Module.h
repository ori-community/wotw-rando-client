#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Module {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Module__Class** type_info;
        inline app::Module__Class* get_class() {
            return il2cpp::get_class<app::Module__Class>(type_info, "System.Reflection", "Module");
        }
        inline app::Module* create() {
            return il2cpp::create_object<app::Module>(get_class());
        }
        inline app::Module__Array* create_array(int size) {
            return il2cpp::array_new<app::Module__Array>(get_class(), size);
        }
    } // namespace Module
} // namespace app::classes::types
