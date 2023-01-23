#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array__Class.h>
#include <Modloader/app/structs/GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array {
        namespace {
            inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array__Class** type_info = &type_info_ref;
        inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array__Class>(type_info, "", "GhostAnimationParameterPlugin+RecordableAnimatorEntry[]");
        }
        inline app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array>(get_class());
        }
    } // namespace GhostAnimationParameterPlugin_RecordableAnimatorEntry__Array
} // namespace app::classes::types
