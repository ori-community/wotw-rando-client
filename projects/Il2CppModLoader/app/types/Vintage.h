#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vintage {
        namespace {
            app::Vintage__Class* type_info_ref = nullptr;
        }
        app::Vintage__Class** type_info = &type_info_ref;
        inline app::Vintage__Class* get_class() {
            return il2cpp::get_class<app::Vintage__Class>(type_info, "Colorful", "Vintage");
        }
        inline app::Vintage* create() {
            return il2cpp::create_object<app::Vintage>(get_class());
        }
    } // namespace Vintage
} // namespace app::classes::types
