#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_ExplicitEntry__Array {
        namespace {
            app::UpdateManager_ExplicitEntry__Array__Class* type_info_ref = nullptr;
        }
        app::UpdateManager_ExplicitEntry__Array__Class** type_info = &type_info_ref;
        inline app::UpdateManager_ExplicitEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::UpdateManager_ExplicitEntry__Array__Class>(type_info, "Moon.Driver", "UpdateManager+ExplicitEntry[]");
        }
        inline app::UpdateManager_ExplicitEntry__Array* create() {
            return il2cpp::create_object<app::UpdateManager_ExplicitEntry__Array>(get_class());
        }
    } // namespace UpdateManager_ExplicitEntry__Array
} // namespace app::classes::types
