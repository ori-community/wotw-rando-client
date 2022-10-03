#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonString {
        namespace {
            app::MoonString__Class* type_info_ref = nullptr;
        }
        app::MoonString__Class** type_info = &type_info_ref;
        inline app::MoonString__Class* get_class() {
            return il2cpp::get_class<app::MoonString__Class>(type_info, "Moon", "MoonString");
        }
        inline app::MoonString* create() {
            return il2cpp::create_object<app::MoonString>(get_class());
        }
    } // namespace MoonString
} // namespace app::classes::types
