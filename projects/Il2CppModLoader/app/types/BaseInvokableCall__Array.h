#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseInvokableCall__Array {
        namespace {
            app::BaseInvokableCall__Array__Class* type_info_ref = nullptr;
        }
        app::BaseInvokableCall__Array__Class** type_info = &type_info_ref;
        inline app::BaseInvokableCall__Array__Class* get_class() {
            return il2cpp::get_class<app::BaseInvokableCall__Array__Class>(type_info, "UnityEngine.Events", "BaseInvokableCall[]");
        }
        inline app::BaseInvokableCall__Array* create() {
            return il2cpp::create_object<app::BaseInvokableCall__Array>(get_class());
        }
    } // namespace BaseInvokableCall__Array
} // namespace app::classes::types
