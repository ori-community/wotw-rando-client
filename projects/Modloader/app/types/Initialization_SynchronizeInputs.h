#pragma once
#include <Modloader/app/structs/Initialization_SynchronizeInputs.h>
#include <Modloader/app/structs/Initialization_SynchronizeInputs__Boxed.h>
#include <Modloader/app/structs/Initialization_SynchronizeInputs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Initialization_SynchronizeInputs {
        inline app::Initialization_SynchronizeInputs__Class** type_info() {
            static app::Initialization_SynchronizeInputs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Initialization_SynchronizeInputs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Initialization_SynchronizeInputs__Class* get_class() {
            return il2cpp::get_nested_class<app::Initialization_SynchronizeInputs__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "Initialization", "SynchronizeInputs");
        }
        inline app::Initialization_SynchronizeInputs* create() {
            return il2cpp::create_object<app::Initialization_SynchronizeInputs>(get_class());
        }
        inline app::Initialization_SynchronizeInputs__Boxed* box(app::Initialization_SynchronizeInputs value) {
            return il2cpp::box_value<app::Initialization_SynchronizeInputs__Boxed>(get_class(), value);
        }
    } // namespace Initialization_SynchronizeInputs
} // namespace app::classes::types
