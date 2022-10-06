#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Value {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Value__Class** type_info;
        inline app::Value__Class* get_class() {
            return il2cpp::get_class<app::Value__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Value");
        }
        inline app::Value* create() {
            return il2cpp::create_object<app::Value>(get_class());
        }
        inline app::Value__Array* create_array(int size) {
            return il2cpp::array_new<app::Value__Array>(get_class(), size);
        }
        inline app::Value__Array* create_array(const std::vector<app::Value*>& items) {
            return il2cpp::array_new<app::Value__Array>(get_class(), items);
        }
    } // namespace Value
} // namespace app::classes::types
