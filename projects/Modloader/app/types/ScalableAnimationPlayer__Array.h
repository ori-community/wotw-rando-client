#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScalableAnimationPlayer__Array__Class.h>
#include <Modloader/app/structs/ScalableAnimationPlayer__Array.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer__Array {
        namespace {
            inline app::ScalableAnimationPlayer__Array__Class* type_info_ref = nullptr;
        }
        inline app::ScalableAnimationPlayer__Array__Class** type_info = &type_info_ref;
        inline app::ScalableAnimationPlayer__Array__Class* get_class() {
            return il2cpp::get_class<app::ScalableAnimationPlayer__Array__Class>(type_info, "Moon", "ScalableAnimationPlayer[]");
        }
        inline app::ScalableAnimationPlayer__Array* create() {
            return il2cpp::create_object<app::ScalableAnimationPlayer__Array>(get_class());
        }
    } // namespace ScalableAnimationPlayer__Array
} // namespace app::classes::types
