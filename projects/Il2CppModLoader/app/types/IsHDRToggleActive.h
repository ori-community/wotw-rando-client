#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsHDRToggleActive {
        namespace {
            app::IsHDRToggleActive__Class* type_info_ref = nullptr;
        }
        app::IsHDRToggleActive__Class** type_info = &type_info_ref;
        inline app::IsHDRToggleActive__Class* get_class() {
            return il2cpp::get_class<app::IsHDRToggleActive__Class>(type_info, "", "IsHDRToggleActive");
        }
        inline app::IsHDRToggleActive* create() {
            return il2cpp::create_object<app::IsHDRToggleActive>(get_class());
        }
    } // namespace IsHDRToggleActive
} // namespace app::classes::types
