#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectBasedMotionBlur__Class.h>
#include <Modloader/app/structs/ObjectBasedMotionBlur.h>

namespace app::classes::types {
    namespace ObjectBasedMotionBlur {
        namespace {
            inline app::ObjectBasedMotionBlur__Class* type_info_ref = nullptr;
        }
        inline app::ObjectBasedMotionBlur__Class** type_info = &type_info_ref;
        inline app::ObjectBasedMotionBlur__Class* get_class() {
            return il2cpp::get_class<app::ObjectBasedMotionBlur__Class>(type_info, "", "ObjectBasedMotionBlur");
        }
        inline app::ObjectBasedMotionBlur* create() {
            return il2cpp::create_object<app::ObjectBasedMotionBlur>(get_class());
        }
    } // namespace ObjectBasedMotionBlur
} // namespace app::classes::types
