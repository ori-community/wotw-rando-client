#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VectorAnimationParameterAnimator__Class.h>
#include <Modloader/app/structs/VectorAnimationParameterAnimator.h>

namespace app::classes::types {
    namespace VectorAnimationParameterAnimator {
        namespace {
            inline app::VectorAnimationParameterAnimator__Class* type_info_ref = nullptr;
        }
        inline app::VectorAnimationParameterAnimator__Class** type_info = &type_info_ref;
        inline app::VectorAnimationParameterAnimator__Class* get_class() {
            return il2cpp::get_class<app::VectorAnimationParameterAnimator__Class>(type_info, "", "VectorAnimationParameterAnimator");
        }
        inline app::VectorAnimationParameterAnimator* create() {
            return il2cpp::create_object<app::VectorAnimationParameterAnimator>(get_class());
        }
    } // namespace VectorAnimationParameterAnimator
} // namespace app::classes::types
