#pragma once
#include <Modloader/app/structs/GhostAnimationParameterPlugin_RecordableAnimatorEntry.h>
#include <Modloader/app/structs/GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array.h>
#include <Modloader/app/structs/GhostAnimationParameterPlugin_RecordableAnimatorEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_RecordableAnimatorEntry {
        inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Class** type_info() {
            static app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Class>(type_info(), "", "GhostAnimationParameterPlugin", "RecordableAnimatorEntry");
        }
        inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_RecordableAnimatorEntry>(get_class());
        }
        inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array>(get_class(), size);
        }
        inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array* create_array(const std::vector<app::GhostAnimationParameterPlugin_RecordableAnimatorEntry*>& items) {
            return il2cpp::array_new<app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array>(get_class(), items);
        }
    } // namespace GhostAnimationParameterPlugin_RecordableAnimatorEntry
} // namespace app::classes::types
