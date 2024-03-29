#pragma once
#include <Modloader/app/structs/HitReactionBehaviour_StaggetEntry.h>
#include <Modloader/app/structs/HitReactionBehaviour_StaggetEntry__Array.h>
#include <Modloader/app/structs/HitReactionBehaviour_StaggetEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviour_StaggetEntry {
        inline app::HitReactionBehaviour_StaggetEntry__Class** type_info() {
            static app::HitReactionBehaviour_StaggetEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionBehaviour_StaggetEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionBehaviour_StaggetEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReactionBehaviour_StaggetEntry__Class>(type_info(), "Moon", "HitReactionBehaviour", "StaggetEntry");
        }
        inline app::HitReactionBehaviour_StaggetEntry* create() {
            return il2cpp::create_object<app::HitReactionBehaviour_StaggetEntry>(get_class());
        }
        inline app::HitReactionBehaviour_StaggetEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReactionBehaviour_StaggetEntry__Array>(get_class(), size);
        }
        inline app::HitReactionBehaviour_StaggetEntry__Array* create_array(const std::vector<app::HitReactionBehaviour_StaggetEntry*>& items) {
            return il2cpp::array_new<app::HitReactionBehaviour_StaggetEntry__Array>(get_class(), items);
        }
    } // namespace HitReactionBehaviour_StaggetEntry
} // namespace app::classes::types
