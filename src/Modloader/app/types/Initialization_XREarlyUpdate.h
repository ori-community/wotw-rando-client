#pragma once
#include <Modloader/app/structs/Initialization_XREarlyUpdate.h>
#include <Modloader/app/structs/Initialization_XREarlyUpdate__Boxed.h>
#include <Modloader/app/structs/Initialization_XREarlyUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Initialization_XREarlyUpdate {
        inline app::Initialization_XREarlyUpdate__Class** type_info() {
            static app::Initialization_XREarlyUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Initialization_XREarlyUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Initialization_XREarlyUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::Initialization_XREarlyUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "Initialization", "XREarlyUpdate");
        }
        inline app::Initialization_XREarlyUpdate* create() {
            return il2cpp::create_object<app::Initialization_XREarlyUpdate>(get_class());
        }
        inline app::Initialization_XREarlyUpdate__Boxed* box(app::Initialization_XREarlyUpdate value) {
            return il2cpp::box_value<app::Initialization_XREarlyUpdate__Boxed>(get_class(), value);
        }
    } // namespace Initialization_XREarlyUpdate
} // namespace app::classes::types
