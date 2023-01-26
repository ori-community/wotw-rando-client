#pragma once
#include <Modloader/app/structs/UberInteractionManager_InteractionCurve__Array.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionCurve__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_InteractionCurve__Array {
        inline app::UberInteractionManager_InteractionCurve__Array__Class** type_info() {
            static app::UberInteractionManager_InteractionCurve__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberInteractionManager_InteractionCurve__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberInteractionManager_InteractionCurve__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManager_InteractionCurve__Array__Class>(type_info(), "", "UberInteractionManager+InteractionCurve[]");
        }
        inline app::UberInteractionManager_InteractionCurve__Array* create() {
            return il2cpp::create_object<app::UberInteractionManager_InteractionCurve__Array>(get_class());
        }
    } // namespace UberInteractionManager_InteractionCurve__Array
} // namespace app::classes::types
