#pragma once
#include <Modloader/app/structs/Initialization_SynchronizeState.h>
#include <Modloader/app/structs/Initialization_SynchronizeState__Boxed.h>
#include <Modloader/app/structs/Initialization_SynchronizeState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Initialization_SynchronizeState {
        inline app::Initialization_SynchronizeState__Class** type_info() {
            static app::Initialization_SynchronizeState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Initialization_SynchronizeState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Initialization_SynchronizeState__Class* get_class() {
            return il2cpp::get_nested_class<app::Initialization_SynchronizeState__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "Initialization", "SynchronizeState");
        }
        inline app::Initialization_SynchronizeState* create() {
            return il2cpp::create_object<app::Initialization_SynchronizeState>(get_class());
        }
        inline app::Initialization_SynchronizeState__Boxed* box(app::Initialization_SynchronizeState value) {
            return il2cpp::box_value<app::Initialization_SynchronizeState__Boxed>(get_class(), value);
        }
    } // namespace Initialization_SynchronizeState
} // namespace app::classes::types
