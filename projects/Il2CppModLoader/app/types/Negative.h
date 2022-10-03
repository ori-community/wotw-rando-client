#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Negative {
        namespace {
            app::Negative__Class* type_info_ref = nullptr;
        }
        app::Negative__Class** type_info = &type_info_ref;
        inline app::Negative__Class* get_class() {
            return il2cpp::get_class<app::Negative__Class>(type_info, "Colorful", "Negative");
        }
        inline app::Negative* create() {
            return il2cpp::create_object<app::Negative>(get_class());
        }
    } // namespace Negative
} // namespace app::classes::types
