#pragma once
#include <Modloader/app/structs/HitReactionBehaviourOld_HitReactionEntry.h>
#include <Modloader/app/structs/HitReactionBehaviourOld_HitReactionEntry__Array.h>
#include <Modloader/app/structs/HitReactionBehaviourOld_HitReactionEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviourOld_HitReactionEntry {
        inline app::HitReactionBehaviourOld_HitReactionEntry__Class** type_info() {
            static app::HitReactionBehaviourOld_HitReactionEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionBehaviourOld_HitReactionEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionBehaviourOld_HitReactionEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReactionBehaviourOld_HitReactionEntry__Class>(type_info(), "Moon", "HitReactionBehaviourOld", "HitReactionEntry");
        }
        inline app::HitReactionBehaviourOld_HitReactionEntry* create() {
            return il2cpp::create_object<app::HitReactionBehaviourOld_HitReactionEntry>(get_class());
        }
        inline app::HitReactionBehaviourOld_HitReactionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReactionBehaviourOld_HitReactionEntry__Array>(get_class(), size);
        }
        inline app::HitReactionBehaviourOld_HitReactionEntry__Array* create_array(const std::vector<app::HitReactionBehaviourOld_HitReactionEntry*>& items) {
            return il2cpp::array_new<app::HitReactionBehaviourOld_HitReactionEntry__Array>(get_class(), items);
        }
    } // namespace HitReactionBehaviourOld_HitReactionEntry
} // namespace app::classes::types
