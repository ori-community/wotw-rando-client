#pragma once
#include <Modloader/app/structs/SetupCoroutine.h>
#include <Modloader/app/structs/SetupCoroutine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetupCoroutine {
        inline app::SetupCoroutine__Class** type_info() {
            static app::SetupCoroutine__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetupCoroutine__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetupCoroutine__Class* get_class() {
            return il2cpp::get_class<app::SetupCoroutine__Class>(type_info(), "UnityEngine", "SetupCoroutine");
        }
        inline app::SetupCoroutine* create() {
            return il2cpp::create_object<app::SetupCoroutine>(get_class());
        }
    } // namespace SetupCoroutine
} // namespace app::classes::types
