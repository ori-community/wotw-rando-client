#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContentDispositionHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContentDispositionHeaderValue__Class** type_info;
        inline app::ContentDispositionHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::ContentDispositionHeaderValue__Class>(type_info, "System.Net.Http.Headers", "ContentDispositionHeaderValue");
        }
        inline app::ContentDispositionHeaderValue* create() {
            return il2cpp::create_object<app::ContentDispositionHeaderValue>(get_class());
        }
    } // namespace ContentDispositionHeaderValue
} // namespace app::classes::types
