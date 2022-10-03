#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviourOld_StaggetEntry {
        namespace {
            app::HitReactionBehaviourOld_StaggetEntry__Class* type_info_ref = nullptr;
        }
        app::HitReactionBehaviourOld_StaggetEntry__Class** type_info = &type_info_ref;
        inline app::HitReactionBehaviourOld_StaggetEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReactionBehaviourOld_StaggetEntry__Class>(type_info, "Moon", "HitReactionBehaviourOld", "StaggetEntry");
        }
        inline app::HitReactionBehaviourOld_StaggetEntry* create() {
            return il2cpp::create_object<app::HitReactionBehaviourOld_StaggetEntry>(get_class());
        }
        inline app::HitReactionBehaviourOld_StaggetEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReactionBehaviourOld_StaggetEntry__Array>(get_class(), size);
        }
    } // namespace HitReactionBehaviourOld_StaggetEntry
} // namespace app::classes::types
