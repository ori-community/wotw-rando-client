#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VectorParameterAnimator__Class.h>
#include <Modloader/app/structs/VectorParameterAnimator.h>

namespace app::classes::types {
    namespace VectorParameterAnimator {
        namespace {
            inline app::VectorParameterAnimator__Class* type_info_ref = nullptr;
        }
        inline app::VectorParameterAnimator__Class** type_info = &type_info_ref;
        inline app::VectorParameterAnimator__Class* get_class() {
            return il2cpp::get_class<app::VectorParameterAnimator__Class>(type_info, "", "VectorParameterAnimator");
        }
        inline app::VectorParameterAnimator* create() {
            return il2cpp::create_object<app::VectorParameterAnimator>(get_class());
        }
    } // namespace VectorParameterAnimator
} // namespace app::classes::types
