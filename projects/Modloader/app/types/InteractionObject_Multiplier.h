#pragma once
#include <Modloader/app/structs/InteractionObject_Multiplier.h>
#include <Modloader/app/structs/InteractionObject_Multiplier__Array.h>
#include <Modloader/app/structs/InteractionObject_Multiplier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionObject_Multiplier {
        inline app::InteractionObject_Multiplier__Class** type_info() {
            static app::InteractionObject_Multiplier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionObject_Multiplier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionObject_Multiplier__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionObject_Multiplier__Class>(type_info(), "RootMotion.FinalIK", "InteractionObject", "Multiplier");
        }
        inline app::InteractionObject_Multiplier* create() {
            return il2cpp::create_object<app::InteractionObject_Multiplier>(get_class());
        }
        inline app::InteractionObject_Multiplier__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionObject_Multiplier__Array>(get_class(), size);
        }
        inline app::InteractionObject_Multiplier__Array* create_array(const std::vector<app::InteractionObject_Multiplier*>& items) {
            return il2cpp::array_new<app::InteractionObject_Multiplier__Array>(get_class(), items);
        }
    } // namespace InteractionObject_Multiplier
} // namespace app::classes::types
