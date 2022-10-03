#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhotoFilter {
        namespace {
            app::PhotoFilter__Class* type_info_ref = nullptr;
        }
        app::PhotoFilter__Class** type_info = &type_info_ref;
        inline app::PhotoFilter__Class* get_class() {
            return il2cpp::get_class<app::PhotoFilter__Class>(type_info, "Colorful", "PhotoFilter");
        }
        inline app::PhotoFilter* create() {
            return il2cpp::create_object<app::PhotoFilter>(get_class());
        }
    } // namespace PhotoFilter
} // namespace app::classes::types
