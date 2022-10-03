#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Threshold {
        namespace {
            app::Threshold__Class* type_info_ref = nullptr;
        }
        app::Threshold__Class** type_info = &type_info_ref;
        inline app::Threshold__Class* get_class() {
            return il2cpp::get_class<app::Threshold__Class>(type_info, "Colorful", "Threshold");
        }
        inline app::Threshold* create() {
            return il2cpp::create_object<app::Threshold>(get_class());
        }
    } // namespace Threshold
} // namespace app::classes::types
