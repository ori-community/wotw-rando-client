#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Type {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Type__Class** type_info;
        inline app::Type__Class* get_class() {
            return il2cpp::get_class<app::Type__Class>(type_info, "System", "Type");
        }
        inline app::Type* create() {
            return il2cpp::create_object<app::Type>(get_class());
        }
        inline app::Type__Array* create_array(int size) {
            return il2cpp::array_new<app::Type__Array>(get_class(), size);
        }
    } // namespace Type
} // namespace app::classes::types
