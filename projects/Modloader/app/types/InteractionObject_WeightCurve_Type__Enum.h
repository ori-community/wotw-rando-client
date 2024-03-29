#pragma once
#include <Modloader/app/structs/InteractionObject_WeightCurve_Type__Enum.h>
#include <Modloader/app/structs/InteractionObject_WeightCurve_Type__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionObject_WeightCurve_Type__Enum {
        inline app::InteractionObject_WeightCurve_Type__Enum__Class** type_info() {
            static app::InteractionObject_WeightCurve_Type__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionObject_WeightCurve_Type__Enum__Class**)(modloader::win::memory::resolve_rva(0x04797BE0));
            }
            return cache;
        }
        inline app::InteractionObject_WeightCurve_Type__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionObject_WeightCurve_Type__Enum__Class>(type_info(), "RootMotion.FinalIK", "InteractionObject+WeightCurve", "Type");
        }
        inline app::InteractionObject_WeightCurve_Type__Enum* create() {
            return il2cpp::create_object<app::InteractionObject_WeightCurve_Type__Enum>(get_class());
        }
    } // namespace InteractionObject_WeightCurve_Type__Enum
} // namespace app::classes::types
