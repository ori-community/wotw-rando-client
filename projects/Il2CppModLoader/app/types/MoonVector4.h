#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonVector4 {
        namespace {
            inline app::MoonVector4__Class* type_info_ref = nullptr;
        }
        inline app::MoonVector4__Class** type_info = &type_info_ref;
        inline app::MoonVector4__Class* get_class() {
            return il2cpp::get_class<app::MoonVector4__Class>(type_info, "Moon", "MoonVector4");
        }
        inline app::MoonVector4* create() {
            return il2cpp::create_object<app::MoonVector4>(get_class());
        }
    } // namespace MoonVector4
} // namespace app::classes::types
