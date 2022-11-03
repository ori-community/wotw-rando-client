#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationCullingType__Enum {
        namespace {
            inline app::AnimationCullingType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AnimationCullingType__Enum__Class** type_info = &type_info_ref;
        inline app::AnimationCullingType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimationCullingType__Enum__Class>(type_info, "UnityEngine", "AnimationCullingType");
        }
        inline app::AnimationCullingType__Enum* create() {
            return il2cpp::create_object<app::AnimationCullingType__Enum>(get_class());
        }
    } // namespace AnimationCullingType__Enum
} // namespace app::classes::types
