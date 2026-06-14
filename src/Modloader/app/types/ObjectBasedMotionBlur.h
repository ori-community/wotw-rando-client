#pragma once
#include <Modloader/app/structs/ObjectBasedMotionBlur.h>
#include <Modloader/app/structs/ObjectBasedMotionBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectBasedMotionBlur {
        inline app::ObjectBasedMotionBlur__Class** type_info() {
            static app::ObjectBasedMotionBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectBasedMotionBlur__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectBasedMotionBlur__Class* get_class() {
            return il2cpp::get_class<app::ObjectBasedMotionBlur__Class>(type_info(), "", "ObjectBasedMotionBlur");
        }
        inline app::ObjectBasedMotionBlur* create() {
            return il2cpp::create_object<app::ObjectBasedMotionBlur>(get_class());
        }
    } // namespace ObjectBasedMotionBlur
} // namespace app::classes::types
