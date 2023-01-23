#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationParameter_Instance__Array__Class.h>
#include <Modloader/app/structs/AnimationParameter_Instance__Array.h>

namespace app::classes::types {
    namespace AnimationParameter_Instance__Array {
        namespace {
            inline app::AnimationParameter_Instance__Array__Class* type_info_ref = nullptr;
        }
        inline app::AnimationParameter_Instance__Array__Class** type_info = &type_info_ref;
        inline app::AnimationParameter_Instance__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameter_Instance__Array__Class>(type_info, "Moon", "AnimationParameter+Instance[]");
        }
        inline app::AnimationParameter_Instance__Array* create() {
            return il2cpp::create_object<app::AnimationParameter_Instance__Array>(get_class());
        }
    } // namespace AnimationParameter_Instance__Array
} // namespace app::classes::types
