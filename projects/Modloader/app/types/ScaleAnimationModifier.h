#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScaleAnimationModifier__Class.h>
#include <Modloader/app/structs/ScaleAnimationModifier.h>

namespace app::classes::types {
    namespace ScaleAnimationModifier {
        namespace {
            inline app::ScaleAnimationModifier__Class* type_info_ref = nullptr;
        }
        inline app::ScaleAnimationModifier__Class** type_info = &type_info_ref;
        inline app::ScaleAnimationModifier__Class* get_class() {
            return il2cpp::get_class<app::ScaleAnimationModifier__Class>(type_info, "", "ScaleAnimationModifier");
        }
        inline app::ScaleAnimationModifier* create() {
            return il2cpp::create_object<app::ScaleAnimationModifier>(get_class());
        }
    } // namespace ScaleAnimationModifier
} // namespace app::classes::types
