#pragma once
#include <Modloader/app/structs/InteractionTarget_Multiplier.h>
#include <Modloader/app/structs/InteractionTarget_Multiplier__Array.h>
#include <Modloader/app/structs/InteractionTarget_Multiplier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionTarget_Multiplier {
        inline app::InteractionTarget_Multiplier__Class** type_info() {
            static app::InteractionTarget_Multiplier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionTarget_Multiplier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionTarget_Multiplier__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionTarget_Multiplier__Class>(type_info(), "RootMotion.FinalIK", "InteractionTarget", "Multiplier");
        }
        inline app::InteractionTarget_Multiplier* create() {
            return il2cpp::create_object<app::InteractionTarget_Multiplier>(get_class());
        }
        inline app::InteractionTarget_Multiplier__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionTarget_Multiplier__Array>(get_class(), size);
        }
        inline app::InteractionTarget_Multiplier__Array* create_array(const std::vector<app::InteractionTarget_Multiplier*>& items) {
            return il2cpp::array_new<app::InteractionTarget_Multiplier__Array>(get_class(), items);
        }
    } // namespace InteractionTarget_Multiplier
} // namespace app::classes::types
