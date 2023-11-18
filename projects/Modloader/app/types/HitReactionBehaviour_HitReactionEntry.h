#pragma once
#include <Modloader/app/structs/HitReactionBehaviour_HitReactionEntry.h>
#include <Modloader/app/structs/HitReactionBehaviour_HitReactionEntry__Array.h>
#include <Modloader/app/structs/HitReactionBehaviour_HitReactionEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviour_HitReactionEntry {
        inline app::HitReactionBehaviour_HitReactionEntry__Class** type_info() {
            static app::HitReactionBehaviour_HitReactionEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionBehaviour_HitReactionEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionBehaviour_HitReactionEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReactionBehaviour_HitReactionEntry__Class>(type_info(), "Moon", "HitReactionBehaviour", "HitReactionEntry");
        }
        inline app::HitReactionBehaviour_HitReactionEntry* create() {
            return il2cpp::create_object<app::HitReactionBehaviour_HitReactionEntry>(get_class());
        }
        inline app::HitReactionBehaviour_HitReactionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReactionBehaviour_HitReactionEntry__Array>(get_class(), size);
        }
        inline app::HitReactionBehaviour_HitReactionEntry__Array* create_array(const std::vector<app::HitReactionBehaviour_HitReactionEntry*>& items) {
            return il2cpp::array_new<app::HitReactionBehaviour_HitReactionEntry__Array>(get_class(), items);
        }
    } // namespace HitReactionBehaviour_HitReactionEntry
} // namespace app::classes::types
