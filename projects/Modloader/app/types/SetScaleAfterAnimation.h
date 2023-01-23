#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetScaleAfterAnimation__Class.h>
#include <Modloader/app/structs/SetScaleAfterAnimation.h>

namespace app::classes::types {
    namespace SetScaleAfterAnimation {
        namespace {
            inline app::SetScaleAfterAnimation__Class* type_info_ref = nullptr;
        }
        inline app::SetScaleAfterAnimation__Class** type_info = &type_info_ref;
        inline app::SetScaleAfterAnimation__Class* get_class() {
            return il2cpp::get_class<app::SetScaleAfterAnimation__Class>(type_info, "", "SetScaleAfterAnimation");
        }
        inline app::SetScaleAfterAnimation* create() {
            return il2cpp::create_object<app::SetScaleAfterAnimation>(get_class());
        }
    } // namespace SetScaleAfterAnimation
} // namespace app::classes::types
