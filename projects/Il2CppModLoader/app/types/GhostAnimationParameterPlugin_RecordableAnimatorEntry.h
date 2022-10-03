#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_RecordableAnimatorEntry {
        namespace {
            app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Class* type_info_ref = nullptr;
        }
        app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Class** type_info = &type_info_ref;
        inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Class>(type_info, "", "GhostAnimationParameterPlugin", "RecordableAnimatorEntry");
        }
        inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_RecordableAnimatorEntry>(get_class());
        }
        inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array>(get_class(), size);
        }
    } // namespace GhostAnimationParameterPlugin_RecordableAnimatorEntry
} // namespace app::classes::types
