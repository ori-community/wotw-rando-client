#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstanciationToggler {
        namespace {
            app::InstanciationToggler__Class* type_info_ref = nullptr;
        }
        app::InstanciationToggler__Class** type_info = &type_info_ref;
        inline app::InstanciationToggler__Class* get_class() {
            return il2cpp::get_class<app::InstanciationToggler__Class>(type_info, "", "InstanciationToggler");
        }
        inline app::InstanciationToggler* create() {
            return il2cpp::create_object<app::InstanciationToggler>(get_class());
        }
    } // namespace InstanciationToggler
} // namespace app::classes::types
