#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActiveAnimationHandle__Array__Class.h>
#include <Modloader/app/structs/ActiveAnimationHandle__Array.h>

namespace app::classes::types {
    namespace ActiveAnimationHandle__Array {
        namespace {
            inline app::ActiveAnimationHandle__Array__Class* type_info_ref = nullptr;
        }
        inline app::ActiveAnimationHandle__Array__Class** type_info = &type_info_ref;
        inline app::ActiveAnimationHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::ActiveAnimationHandle__Array__Class>(type_info, "Moon", "ActiveAnimationHandle[]");
        }
        inline app::ActiveAnimationHandle__Array* create() {
            return il2cpp::create_object<app::ActiveAnimationHandle__Array>(get_class());
        }
    } // namespace ActiveAnimationHandle__Array
} // namespace app::classes::types
