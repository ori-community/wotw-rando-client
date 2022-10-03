#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutomaticParentSelector {
        namespace {
            app::AutomaticParentSelector__Class* type_info_ref = nullptr;
        }
        app::AutomaticParentSelector__Class** type_info = &type_info_ref;
        inline app::AutomaticParentSelector__Class* get_class() {
            return il2cpp::get_class<app::AutomaticParentSelector__Class>(type_info, "CatlikeCoding.Utilities", "AutomaticParentSelector");
        }
        inline app::AutomaticParentSelector* create() {
            return il2cpp::create_object<app::AutomaticParentSelector>(get_class());
        }
    } // namespace AutomaticParentSelector
} // namespace app::classes::types
