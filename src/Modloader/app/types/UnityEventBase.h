#pragma once
#include <Modloader/app/structs/UnityEventBase.h>
#include <Modloader/app/structs/UnityEventBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityEventBase {
        inline app::UnityEventBase__Class** type_info() {
            static app::UnityEventBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityEventBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityEventBase__Class* get_class() {
            return il2cpp::get_class<app::UnityEventBase__Class>(type_info(), "UnityEngine.Events", "UnityEventBase");
        }
        inline app::UnityEventBase* create() {
            return il2cpp::create_object<app::UnityEventBase>(get_class());
        }
    } // namespace UnityEventBase
} // namespace app::classes::types
