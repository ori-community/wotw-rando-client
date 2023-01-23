#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LookBlendAnimationControl__Class.h>
#include <Modloader/app/structs/LookBlendAnimationControl.h>

namespace app::classes::types {
    namespace LookBlendAnimationControl {
        namespace {
            inline app::LookBlendAnimationControl__Class* type_info_ref = nullptr;
        }
        inline app::LookBlendAnimationControl__Class** type_info = &type_info_ref;
        inline app::LookBlendAnimationControl__Class* get_class() {
            return il2cpp::get_class<app::LookBlendAnimationControl__Class>(type_info, "", "LookBlendAnimationControl");
        }
        inline app::LookBlendAnimationControl* create() {
            return il2cpp::create_object<app::LookBlendAnimationControl>(get_class());
        }
    } // namespace LookBlendAnimationControl
} // namespace app::classes::types
