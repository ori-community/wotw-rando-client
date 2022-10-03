#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviour_StaggetEntry {
        namespace {
            app::HitReactionBehaviour_StaggetEntry__Class* type_info_ref = nullptr;
        }
        app::HitReactionBehaviour_StaggetEntry__Class** type_info = &type_info_ref;
        inline app::HitReactionBehaviour_StaggetEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReactionBehaviour_StaggetEntry__Class>(type_info, "Moon", "HitReactionBehaviour", "StaggetEntry");
        }
        inline app::HitReactionBehaviour_StaggetEntry* create() {
            return il2cpp::create_object<app::HitReactionBehaviour_StaggetEntry>(get_class());
        }
        inline app::HitReactionBehaviour_StaggetEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReactionBehaviour_StaggetEntry__Array>(get_class(), size);
        }
    } // namespace HitReactionBehaviour_StaggetEntry
} // namespace app::classes::types
