#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkShowOnlyAttribute {
        namespace {
            app::AkShowOnlyAttribute__Class* type_info_ref = nullptr;
        }
        app::AkShowOnlyAttribute__Class** type_info = &type_info_ref;
        inline app::AkShowOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::AkShowOnlyAttribute__Class>(type_info, "", "AkShowOnlyAttribute");
        }
        inline app::AkShowOnlyAttribute* create() {
            return il2cpp::create_object<app::AkShowOnlyAttribute>(get_class());
        }
    } // namespace AkShowOnlyAttribute
} // namespace app::classes::types
