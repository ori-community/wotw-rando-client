#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameValueSectionHandler {
        namespace {
            app::NameValueSectionHandler__Class* type_info_ref = nullptr;
        }
        app::NameValueSectionHandler__Class** type_info = &type_info_ref;
        inline app::NameValueSectionHandler__Class* get_class() {
            return il2cpp::get_class<app::NameValueSectionHandler__Class>(type_info, "System.Configuration", "NameValueSectionHandler");
        }
        inline app::NameValueSectionHandler* create() {
            return il2cpp::create_object<app::NameValueSectionHandler>(get_class());
        }
    } // namespace NameValueSectionHandler
} // namespace app::classes::types
