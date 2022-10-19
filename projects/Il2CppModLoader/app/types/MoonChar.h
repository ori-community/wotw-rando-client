#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonChar {
        namespace {
            inline app::MoonChar__Class* type_info_ref = nullptr;
        }
        inline app::MoonChar__Class** type_info = &type_info_ref;
        inline app::MoonChar__Class* get_class() {
            return il2cpp::get_class<app::MoonChar__Class>(type_info, "Moon", "MoonChar");
        }
        inline app::MoonChar* create() {
            return il2cpp::create_object<app::MoonChar>(get_class());
        }
    } // namespace MoonChar
} // namespace app::classes::types
