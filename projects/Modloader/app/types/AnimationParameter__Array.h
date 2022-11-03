#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationParameter__Array {
        namespace {
            inline app::AnimationParameter__Array__Class* type_info_ref = nullptr;
        }
        inline app::AnimationParameter__Array__Class** type_info = &type_info_ref;
        inline app::AnimationParameter__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameter__Array__Class>(type_info, "Moon", "AnimationParameter[]");
        }
        inline app::AnimationParameter__Array* create() {
            return il2cpp::create_object<app::AnimationParameter__Array>(get_class());
        }
    } // namespace AnimationParameter__Array
} // namespace app::classes::types
