#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MediaTypeHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MediaTypeHeaderValue__Class** type_info;
        inline app::MediaTypeHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::MediaTypeHeaderValue__Class>(type_info, "System.Net.Http.Headers", "MediaTypeHeaderValue");
        }
        inline app::MediaTypeHeaderValue* create() {
            return il2cpp::create_object<app::MediaTypeHeaderValue>(get_class());
        }
    } // namespace MediaTypeHeaderValue
} // namespace app::classes::types
