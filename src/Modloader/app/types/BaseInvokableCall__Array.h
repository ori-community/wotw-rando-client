#pragma once
#include <Modloader/app/structs/BaseInvokableCall__Array.h>
#include <Modloader/app/structs/BaseInvokableCall__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseInvokableCall__Array {
        inline app::BaseInvokableCall__Array__Class** type_info() {
            static app::BaseInvokableCall__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseInvokableCall__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseInvokableCall__Array__Class* get_class() {
            return il2cpp::get_class<app::BaseInvokableCall__Array__Class>(type_info(), "UnityEngine.Events", "BaseInvokableCall[]");
        }
        inline app::BaseInvokableCall__Array* create() {
            return il2cpp::create_object<app::BaseInvokableCall__Array>(get_class());
        }
    } // namespace BaseInvokableCall__Array
} // namespace app::classes::types
