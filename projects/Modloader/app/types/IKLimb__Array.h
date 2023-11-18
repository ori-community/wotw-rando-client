#pragma once
#include <Modloader/app/structs/IKLimb__Array.h>
#include <Modloader/app/structs/IKLimb__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKLimb__Array {
        inline app::IKLimb__Array__Class** type_info() {
            static app::IKLimb__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKLimb__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKLimb__Array__Class* get_class() {
            return il2cpp::get_class<app::IKLimb__Array__Class>(type_info(), "Moon", "IKLimb[]");
        }
        inline app::IKLimb__Array* create() {
            return il2cpp::create_object<app::IKLimb__Array>(get_class());
        }
    } // namespace IKLimb__Array
} // namespace app::classes::types
