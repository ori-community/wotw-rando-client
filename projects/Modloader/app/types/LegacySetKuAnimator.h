#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacySetKuAnimator__Class.h>
#include <Modloader/app/structs/LegacySetKuAnimator.h>

namespace app::classes::types {
    namespace LegacySetKuAnimator {
        namespace {
            inline app::LegacySetKuAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacySetKuAnimator__Class** type_info = &type_info_ref;
        inline app::LegacySetKuAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacySetKuAnimator__Class>(type_info, "", "LegacySetKuAnimator");
        }
        inline app::LegacySetKuAnimator* create() {
            return il2cpp::create_object<app::LegacySetKuAnimator>(get_class());
        }
    } // namespace LegacySetKuAnimator
} // namespace app::classes::types
