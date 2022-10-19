#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonVector2 {
        namespace {
            inline app::MoonVector2__Class* type_info_ref = nullptr;
        }
        inline app::MoonVector2__Class** type_info = &type_info_ref;
        inline app::MoonVector2__Class* get_class() {
            return il2cpp::get_class<app::MoonVector2__Class>(type_info, "Moon", "MoonVector2");
        }
        inline app::MoonVector2* create() {
            return il2cpp::create_object<app::MoonVector2>(get_class());
        }
    } // namespace MoonVector2
} // namespace app::classes::types
