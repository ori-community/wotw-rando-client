#pragma once
#include <Modloader/app/structs/HitReactionBehaviourOld_StaggetEntry.h>
#include <Modloader/app/structs/HitReactionBehaviourOld_StaggetEntry__Array.h>
#include <Modloader/app/structs/HitReactionBehaviourOld_StaggetEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviourOld_StaggetEntry {
        inline app::HitReactionBehaviourOld_StaggetEntry__Class** type_info() {
            static app::HitReactionBehaviourOld_StaggetEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionBehaviourOld_StaggetEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionBehaviourOld_StaggetEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReactionBehaviourOld_StaggetEntry__Class>(type_info(), "Moon", "HitReactionBehaviourOld", "StaggetEntry");
        }
        inline app::HitReactionBehaviourOld_StaggetEntry* create() {
            return il2cpp::create_object<app::HitReactionBehaviourOld_StaggetEntry>(get_class());
        }
        inline app::HitReactionBehaviourOld_StaggetEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReactionBehaviourOld_StaggetEntry__Array>(get_class(), size);
        }
        inline app::HitReactionBehaviourOld_StaggetEntry__Array* create_array(const std::vector<app::HitReactionBehaviourOld_StaggetEntry*>& items) {
            return il2cpp::array_new<app::HitReactionBehaviourOld_StaggetEntry__Array>(get_class(), items);
        }
    } // namespace HitReactionBehaviourOld_StaggetEntry
} // namespace app::classes::types
