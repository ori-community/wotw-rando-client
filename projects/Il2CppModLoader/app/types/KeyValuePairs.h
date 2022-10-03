#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyValuePairs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyValuePairs__Class** type_info;
        inline app::KeyValuePairs__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePairs__Class>(type_info, "System.Collections", "KeyValuePairs");
        }
        inline app::KeyValuePairs* create() {
            return il2cpp::create_object<app::KeyValuePairs>(get_class());
        }
        inline app::KeyValuePairs__Array* create_array(int size) {
            return il2cpp::array_new<app::KeyValuePairs__Array>(get_class(), size);
        }
    } // namespace KeyValuePairs
} // namespace app::classes::types
