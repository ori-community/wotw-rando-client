#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviourOld_HitReactionEntry {
        namespace {
            app::HitReactionBehaviourOld_HitReactionEntry__Class* type_info_ref = nullptr;
        }
        app::HitReactionBehaviourOld_HitReactionEntry__Class** type_info = &type_info_ref;
        inline app::HitReactionBehaviourOld_HitReactionEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReactionBehaviourOld_HitReactionEntry__Class>(type_info, "Moon", "HitReactionBehaviourOld", "HitReactionEntry");
        }
        inline app::HitReactionBehaviourOld_HitReactionEntry* create() {
            return il2cpp::create_object<app::HitReactionBehaviourOld_HitReactionEntry>(get_class());
        }
        inline app::HitReactionBehaviourOld_HitReactionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReactionBehaviourOld_HitReactionEntry__Array>(get_class(), size);
        }
    } // namespace HitReactionBehaviourOld_HitReactionEntry
} // namespace app::classes::types
