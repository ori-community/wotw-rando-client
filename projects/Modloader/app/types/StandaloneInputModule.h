#pragma once
#include <Modloader/app/structs/StandaloneInputModule.h>
#include <Modloader/app/structs/StandaloneInputModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StandaloneInputModule {
        inline app::StandaloneInputModule__Class** type_info() {
            static app::StandaloneInputModule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StandaloneInputModule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StandaloneInputModule__Class* get_class() {
            return il2cpp::get_class<app::StandaloneInputModule__Class>(type_info(), "UnityEngine.EventSystems", "StandaloneInputModule");
        }
        inline app::StandaloneInputModule* create() {
            return il2cpp::create_object<app::StandaloneInputModule>(get_class());
        }
    } // namespace StandaloneInputModule
} // namespace app::classes::types
