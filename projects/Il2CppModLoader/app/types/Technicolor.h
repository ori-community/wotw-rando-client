#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Technicolor {
        namespace {
            app::Technicolor__Class* type_info_ref = nullptr;
        }
        app::Technicolor__Class** type_info = &type_info_ref;
        inline app::Technicolor__Class* get_class() {
            return il2cpp::get_class<app::Technicolor__Class>(type_info, "Colorful", "Technicolor");
        }
        inline app::Technicolor* create() {
            return il2cpp::create_object<app::Technicolor>(get_class());
        }
    } // namespace Technicolor
} // namespace app::classes::types
