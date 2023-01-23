#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VolumePatrolBehaviourNew__Class.h>
#include <Modloader/app/structs/VolumePatrolBehaviourNew.h>

namespace app::classes::types {
    namespace VolumePatrolBehaviourNew {
        namespace {
            inline app::VolumePatrolBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::VolumePatrolBehaviourNew__Class** type_info = &type_info_ref;
        inline app::VolumePatrolBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::VolumePatrolBehaviourNew__Class>(type_info, "Moon", "VolumePatrolBehaviourNew");
        }
        inline app::VolumePatrolBehaviourNew* create() {
            return il2cpp::create_object<app::VolumePatrolBehaviourNew>(get_class());
        }
    } // namespace VolumePatrolBehaviourNew
} // namespace app::classes::types
