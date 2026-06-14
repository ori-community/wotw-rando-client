#pragma once
#include <Modloader/app/structs/UberInteractionManager_InteractionCurve.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionCurve__Array.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionCurve__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_InteractionCurve {
        inline app::UberInteractionManager_InteractionCurve__Class** type_info() {
            static app::UberInteractionManager_InteractionCurve__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberInteractionManager_InteractionCurve__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberInteractionManager_InteractionCurve__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_InteractionCurve__Class>(type_info(), "", "UberInteractionManager", "InteractionCurve");
        }
        inline app::UberInteractionManager_InteractionCurve* create() {
            return il2cpp::create_object<app::UberInteractionManager_InteractionCurve>(get_class());
        }
        inline app::UberInteractionManager_InteractionCurve__Array* create_array(int size) {
            return il2cpp::array_new<app::UberInteractionManager_InteractionCurve__Array>(get_class(), size);
        }
        inline app::UberInteractionManager_InteractionCurve__Array* create_array(const std::vector<app::UberInteractionManager_InteractionCurve*>& items) {
            return il2cpp::array_new<app::UberInteractionManager_InteractionCurve__Array>(get_class(), items);
        }
    } // namespace UberInteractionManager_InteractionCurve
} // namespace app::classes::types
