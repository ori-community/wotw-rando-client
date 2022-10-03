#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateHandle {
        namespace {
            app::UpdateHandle__Class* type_info_ref = nullptr;
        }
        app::UpdateHandle__Class** type_info = &type_info_ref;
        inline app::UpdateHandle__Class* get_class() {
            return il2cpp::get_class<app::UpdateHandle__Class>(type_info, "Moon", "UpdateHandle");
        }
        inline app::UpdateHandle* create() {
            return il2cpp::create_object<app::UpdateHandle>(get_class());
        }
    } // namespace UpdateHandle
} // namespace app::classes::types
