#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FastVignette {
        namespace {
            inline app::FastVignette__Class* type_info_ref = nullptr;
        }
        inline app::FastVignette__Class** type_info = &type_info_ref;
        inline app::FastVignette__Class* get_class() {
            return il2cpp::get_class<app::FastVignette__Class>(type_info, "Colorful", "FastVignette");
        }
        inline app::FastVignette* create() {
            return il2cpp::create_object<app::FastVignette>(get_class());
        }
    } // namespace FastVignette
} // namespace app::classes::types
