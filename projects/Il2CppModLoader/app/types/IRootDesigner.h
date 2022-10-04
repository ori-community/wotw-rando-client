#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRootDesigner {
        namespace {
            app::IRootDesigner__Class* type_info_ref = nullptr;
        }
        app::IRootDesigner__Class** type_info = &type_info_ref;
        inline app::IRootDesigner__Class* get_class() {
            return il2cpp::get_class<app::IRootDesigner__Class>(type_info, "System.ComponentModel.Design", "IRootDesigner");
        }
        inline app::IRootDesigner* create() {
            return il2cpp::create_object<app::IRootDesigner>(get_class());
        }
    } // namespace IRootDesigner
} // namespace app::classes::types
