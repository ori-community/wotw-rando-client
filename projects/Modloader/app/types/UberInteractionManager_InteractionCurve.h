#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberInteractionManager_InteractionCurve {
        namespace {
            inline app::UberInteractionManager_InteractionCurve__Class* type_info_ref = nullptr;
        }
        inline app::UberInteractionManager_InteractionCurve__Class** type_info = &type_info_ref;
        inline app::UberInteractionManager_InteractionCurve__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_InteractionCurve__Class>(type_info, "", "UberInteractionManager", "InteractionCurve");
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
