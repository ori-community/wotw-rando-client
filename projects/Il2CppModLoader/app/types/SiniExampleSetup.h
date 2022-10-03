#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SiniExampleSetup {
        namespace {
            app::SiniExampleSetup__Class* type_info_ref = nullptr;
        }
        app::SiniExampleSetup__Class** type_info = &type_info_ref;
        inline app::SiniExampleSetup__Class* get_class() {
            return il2cpp::get_class<app::SiniExampleSetup__Class>(type_info, "", "SiniExampleSetup");
        }
        inline app::SiniExampleSetup* create() {
            return il2cpp::create_object<app::SiniExampleSetup>(get_class());
        }
    } // namespace SiniExampleSetup
} // namespace app::classes::types
