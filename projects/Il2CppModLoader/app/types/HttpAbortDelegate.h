#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpAbortDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpAbortDelegate__Class** type_info;
        inline app::HttpAbortDelegate__Class* get_class() {
            return il2cpp::get_class<app::HttpAbortDelegate__Class>(type_info, "System.Net", "HttpAbortDelegate");
        }
        inline app::HttpAbortDelegate* create() {
            return il2cpp::create_object<app::HttpAbortDelegate>(get_class());
        }
    } // namespace HttpAbortDelegate
} // namespace app::classes::types
