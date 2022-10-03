#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapIcon {
        namespace {
            app::AreaMapIcon__Class* type_info_ref = nullptr;
        }
        app::AreaMapIcon__Class** type_info = &type_info_ref;
        inline app::AreaMapIcon__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIcon__Class>(type_info, "", "AreaMapIcon");
        }
        inline app::AreaMapIcon* create() {
            return il2cpp::create_object<app::AreaMapIcon>(get_class());
        }
    } // namespace AreaMapIcon
} // namespace app::classes::types
