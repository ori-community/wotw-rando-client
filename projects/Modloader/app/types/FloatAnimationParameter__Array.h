#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatAnimationParameter__Array {
        namespace {
            inline app::FloatAnimationParameter__Array__Class* type_info_ref = nullptr;
        }
        inline app::FloatAnimationParameter__Array__Class** type_info = &type_info_ref;
        inline app::FloatAnimationParameter__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatAnimationParameter__Array__Class>(type_info, "Moon", "FloatAnimationParameter[]");
        }
        inline app::FloatAnimationParameter__Array* create() {
            return il2cpp::create_object<app::FloatAnimationParameter__Array>(get_class());
        }
    } // namespace FloatAnimationParameter__Array
} // namespace app::classes::types
