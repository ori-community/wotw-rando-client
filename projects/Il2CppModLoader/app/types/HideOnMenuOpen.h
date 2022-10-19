#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HideOnMenuOpen {
        namespace {
            inline app::HideOnMenuOpen__Class* type_info_ref = nullptr;
        }
        inline app::HideOnMenuOpen__Class** type_info = &type_info_ref;
        inline app::HideOnMenuOpen__Class* get_class() {
            return il2cpp::get_class<app::HideOnMenuOpen__Class>(type_info, "", "HideOnMenuOpen");
        }
        inline app::HideOnMenuOpen* create() {
            return il2cpp::create_object<app::HideOnMenuOpen>(get_class());
        }
    } // namespace HideOnMenuOpen
} // namespace app::classes::types
