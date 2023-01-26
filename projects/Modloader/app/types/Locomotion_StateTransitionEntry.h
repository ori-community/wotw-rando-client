#pragma once
#include <Modloader/app/structs/Locomotion_StateTransitionEntry.h>
#include <Modloader/app/structs/Locomotion_StateTransitionEntry__Array.h>
#include <Modloader/app/structs/Locomotion_StateTransitionEntry__Boxed.h>
#include <Modloader/app/structs/Locomotion_StateTransitionEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Locomotion_StateTransitionEntry {
        inline app::Locomotion_StateTransitionEntry__Class** type_info() {
            static app::Locomotion_StateTransitionEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Locomotion_StateTransitionEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Locomotion_StateTransitionEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::Locomotion_StateTransitionEntry__Class>(type_info(), "Moon", "Locomotion", "StateTransitionEntry");
        }
        inline app::Locomotion_StateTransitionEntry* create() {
            return il2cpp::create_object<app::Locomotion_StateTransitionEntry>(get_class());
        }
        inline app::Locomotion_StateTransitionEntry__Boxed* box(app::Locomotion_StateTransitionEntry value) {
            return il2cpp::box_value<app::Locomotion_StateTransitionEntry__Boxed>(get_class(), value);
        }
        inline app::Locomotion_StateTransitionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::Locomotion_StateTransitionEntry__Array>(get_class(), size);
        }
        inline app::Locomotion_StateTransitionEntry__Array* create_array(const std::vector<app::Locomotion_StateTransitionEntry>& items) {
            return il2cpp::array_new<app::Locomotion_StateTransitionEntry__Array>(get_class(), items);
        }
    } // namespace Locomotion_StateTransitionEntry
} // namespace app::classes::types
