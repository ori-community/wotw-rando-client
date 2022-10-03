#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DialogGraph {
        namespace {
            app::DialogGraph__Class* type_info_ref = nullptr;
        }
        app::DialogGraph__Class** type_info = &type_info_ref;
        inline app::DialogGraph__Class* get_class() {
            return il2cpp::get_class<app::DialogGraph__Class>(type_info, "", "DialogGraph");
        }
        inline app::DialogGraph* create() {
            return il2cpp::create_object<app::DialogGraph>(get_class());
        }
    } // namespace DialogGraph
} // namespace app::classes::types
