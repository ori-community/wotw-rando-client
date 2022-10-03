#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAssert {
        namespace {
            app::MoonAssert__Class* type_info_ref = nullptr;
        }
        app::MoonAssert__Class** type_info = &type_info_ref;
        inline app::MoonAssert__Class* get_class() {
            return il2cpp::get_class<app::MoonAssert__Class>(type_info, "", "MoonAssert");
        }
        inline app::MoonAssert* create() {
            return il2cpp::create_object<app::MoonAssert>(get_class());
        }
    } // namespace MoonAssert
} // namespace app::classes::types
