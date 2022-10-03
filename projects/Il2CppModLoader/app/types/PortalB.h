#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PortalB {
        namespace {
            app::PortalB__Class* type_info_ref = nullptr;
        }
        app::PortalB__Class** type_info = &type_info_ref;
        inline app::PortalB__Class* get_class() {
            return il2cpp::get_class<app::PortalB__Class>(type_info, "", "PortalB");
        }
        inline app::PortalB* create() {
            return il2cpp::create_object<app::PortalB>(get_class());
        }
    } // namespace PortalB
} // namespace app::classes::types
