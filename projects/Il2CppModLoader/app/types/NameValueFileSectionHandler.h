#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameValueFileSectionHandler {
        namespace {
            app::NameValueFileSectionHandler__Class* type_info_ref = nullptr;
        }
        app::NameValueFileSectionHandler__Class** type_info = &type_info_ref;
        inline app::NameValueFileSectionHandler__Class* get_class() {
            return il2cpp::get_class<app::NameValueFileSectionHandler__Class>(type_info, "System.Configuration", "NameValueFileSectionHandler");
        }
        inline app::NameValueFileSectionHandler* create() {
            return il2cpp::create_object<app::NameValueFileSectionHandler>(get_class());
        }
    } // namespace NameValueFileSectionHandler
} // namespace app::classes::types
