#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScaleTweenAnimator__Class.h>
#include <Modloader/app/structs/ScaleTweenAnimator.h>

namespace app::classes::types {
    namespace ScaleTweenAnimator {
        namespace {
            inline app::ScaleTweenAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ScaleTweenAnimator__Class** type_info = &type_info_ref;
        inline app::ScaleTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::ScaleTweenAnimator__Class>(type_info, "Moon.Timeline", "ScaleTweenAnimator");
        }
        inline app::ScaleTweenAnimator* create() {
            return il2cpp::create_object<app::ScaleTweenAnimator>(get_class());
        }
    } // namespace ScaleTweenAnimator
} // namespace app::classes::types
