#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonAnimator_TransformData__Array__Class.h>
#include <Modloader/app/structs/MoonAnimator_TransformData__Array.h>

namespace app::classes::types {
    namespace MoonAnimator_TransformData__Array {
        namespace {
            inline app::MoonAnimator_TransformData__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimator_TransformData__Array__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_TransformData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_TransformData__Array__Class>(type_info, "Moon", "MoonAnimator+TransformData[]");
        }
        inline app::MoonAnimator_TransformData__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_TransformData__Array>(get_class());
        }
    } // namespace MoonAnimator_TransformData__Array
} // namespace app::classes::types
