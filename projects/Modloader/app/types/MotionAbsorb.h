#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MotionAbsorb__Class.h>
#include <Modloader/app/structs/MotionAbsorb.h>

namespace app::classes::types {
    namespace MotionAbsorb {
        namespace {
            inline app::MotionAbsorb__Class* type_info_ref = nullptr;
        }
        inline app::MotionAbsorb__Class** type_info = &type_info_ref;
        inline app::MotionAbsorb__Class* get_class() {
            return il2cpp::get_class<app::MotionAbsorb__Class>(type_info, "RootMotion.Demos", "MotionAbsorb");
        }
        inline app::MotionAbsorb* create() {
            return il2cpp::create_object<app::MotionAbsorb>(get_class());
        }
    } // namespace MotionAbsorb
} // namespace app::classes::types
