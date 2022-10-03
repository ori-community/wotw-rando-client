#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HueFocus {
        namespace {
            app::HueFocus__Class* type_info_ref = nullptr;
        }
        app::HueFocus__Class** type_info = &type_info_ref;
        inline app::HueFocus__Class* get_class() {
            return il2cpp::get_class<app::HueFocus__Class>(type_info, "Colorful", "HueFocus");
        }
        inline app::HueFocus* create() {
            return il2cpp::create_object<app::HueFocus>(get_class());
        }
    } // namespace HueFocus
} // namespace app::classes::types
