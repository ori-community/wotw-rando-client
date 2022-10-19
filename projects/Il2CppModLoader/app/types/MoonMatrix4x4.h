#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonMatrix4x4 {
        namespace {
            inline app::MoonMatrix4x4__Class* type_info_ref = nullptr;
        }
        inline app::MoonMatrix4x4__Class** type_info = &type_info_ref;
        inline app::MoonMatrix4x4__Class* get_class() {
            return il2cpp::get_class<app::MoonMatrix4x4__Class>(type_info, "Moon", "MoonMatrix4x4");
        }
        inline app::MoonMatrix4x4* create() {
            return il2cpp::create_object<app::MoonMatrix4x4>(get_class());
        }
    } // namespace MoonMatrix4x4
} // namespace app::classes::types
