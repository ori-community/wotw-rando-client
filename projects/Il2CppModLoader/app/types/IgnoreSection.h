#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IgnoreSection {
        namespace {
            app::IgnoreSection__Class* type_info_ref = nullptr;
        }
        app::IgnoreSection__Class** type_info = &type_info_ref;
        inline app::IgnoreSection__Class* get_class() {
            return il2cpp::get_class<app::IgnoreSection__Class>(type_info, "System.Configuration", "IgnoreSection");
        }
        inline app::IgnoreSection* create() {
            return il2cpp::create_object<app::IgnoreSection>(get_class());
        }
    } // namespace IgnoreSection
} // namespace app::classes::types
