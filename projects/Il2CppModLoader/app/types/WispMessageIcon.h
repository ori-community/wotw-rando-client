#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WispMessageIcon {
        namespace {
            app::WispMessageIcon__Class* type_info_ref = nullptr;
        }
        app::WispMessageIcon__Class** type_info = &type_info_ref;
        inline app::WispMessageIcon__Class* get_class() {
            return il2cpp::get_class<app::WispMessageIcon__Class>(type_info, "", "WispMessageIcon");
        }
        inline app::WispMessageIcon* create() {
            return il2cpp::create_object<app::WispMessageIcon>(get_class());
        }
    } // namespace WispMessageIcon
} // namespace app::classes::types
