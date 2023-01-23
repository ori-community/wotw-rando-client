#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateVolitileOverrideAnimator__Array__Class.h>
#include <Modloader/app/structs/UberStateVolitileOverrideAnimator__Array.h>

namespace app::classes::types {
    namespace UberStateVolitileOverrideAnimator__Array {
        namespace {
            inline app::UberStateVolitileOverrideAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberStateVolitileOverrideAnimator__Array__Class** type_info = &type_info_ref;
        inline app::UberStateVolitileOverrideAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateVolitileOverrideAnimator__Array__Class>(type_info, "Moon.Timeline", "UberStateVolitileOverrideAnimator[]");
        }
        inline app::UberStateVolitileOverrideAnimator__Array* create() {
            return il2cpp::create_object<app::UberStateVolitileOverrideAnimator__Array>(get_class());
        }
    } // namespace UberStateVolitileOverrideAnimator__Array
} // namespace app::classes::types
