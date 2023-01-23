#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RotationAnimatorB__Class.h>
#include <Modloader/app/structs/RotationAnimatorB.h>

namespace app::classes::types {
    namespace RotationAnimatorB {
        namespace {
            inline app::RotationAnimatorB__Class* type_info_ref = nullptr;
        }
        inline app::RotationAnimatorB__Class** type_info = &type_info_ref;
        inline app::RotationAnimatorB__Class* get_class() {
            return il2cpp::get_class<app::RotationAnimatorB__Class>(type_info, "", "RotationAnimatorB");
        }
        inline app::RotationAnimatorB* create() {
            return il2cpp::create_object<app::RotationAnimatorB>(get_class());
        }
    } // namespace RotationAnimatorB
} // namespace app::classes::types
