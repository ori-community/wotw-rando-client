#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpRequestCreator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpRequestCreator__Class** type_info;
        inline app::HttpRequestCreator__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestCreator__Class>(type_info, "System.Net", "HttpRequestCreator");
        }
        inline app::HttpRequestCreator* create() {
            return il2cpp::create_object<app::HttpRequestCreator>(get_class());
        }
    } // namespace HttpRequestCreator
} // namespace app::classes::types
