#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ViaHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ViaHeaderValue__Class** type_info;
        inline app::ViaHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::ViaHeaderValue__Class>(type_info, "System.Net.Http.Headers", "ViaHeaderValue");
        }
        inline app::ViaHeaderValue* create() {
            return il2cpp::create_object<app::ViaHeaderValue>(get_class());
        }
        inline app::ViaHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::ViaHeaderValue__Array>(get_class(), size);
        }
    } // namespace ViaHeaderValue
} // namespace app::classes::types
