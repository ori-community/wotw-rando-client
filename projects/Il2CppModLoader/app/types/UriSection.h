#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriSection {
        namespace {
            app::UriSection__Class* type_info_ref = nullptr;
        }
        app::UriSection__Class** type_info = &type_info_ref;
        inline app::UriSection__Class* get_class() {
            return il2cpp::get_class<app::UriSection__Class>(type_info, "System.Configuration", "UriSection");
        }
        inline app::UriSection* create() {
            return il2cpp::create_object<app::UriSection>(get_class());
        }
    } // namespace UriSection
} // namespace app::classes::types
