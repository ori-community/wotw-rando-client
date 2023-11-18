#pragma once
#include <Modloader/app/structs/UberInteractionManager_InteractionCurveType__Enum.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionCurveType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_InteractionCurveType__Enum {
        inline app::UberInteractionManager_InteractionCurveType__Enum__Class** type_info() {
            static app::UberInteractionManager_InteractionCurveType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionManager_InteractionCurveType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047442E8));
            }
            return cache;
        }
        inline app::UberInteractionManager_InteractionCurveType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_InteractionCurveType__Enum__Class>(type_info(), "", "UberInteractionManager", "InteractionCurveType");
        }
        inline app::UberInteractionManager_InteractionCurveType__Enum* create() {
            return il2cpp::create_object<app::UberInteractionManager_InteractionCurveType__Enum>(get_class());
        }
    } // namespace UberInteractionManager_InteractionCurveType__Enum
} // namespace app::classes::types
