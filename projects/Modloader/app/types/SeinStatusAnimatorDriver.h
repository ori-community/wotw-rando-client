#pragma once
#include <Modloader/app/structs/SeinStatusAnimatorDriver.h>
#include <Modloader/app/structs/SeinStatusAnimatorDriver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinStatusAnimatorDriver {
        inline app::SeinStatusAnimatorDriver__Class** type_info() {
            static app::SeinStatusAnimatorDriver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinStatusAnimatorDriver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinStatusAnimatorDriver__Class* get_class() {
            return il2cpp::get_class<app::SeinStatusAnimatorDriver__Class>(type_info(), "", "SeinStatusAnimatorDriver");
        }
        inline app::SeinStatusAnimatorDriver* create() {
            return il2cpp::create_object<app::SeinStatusAnimatorDriver>(get_class());
        }
    } // namespace SeinStatusAnimatorDriver
} // namespace app::classes::types
