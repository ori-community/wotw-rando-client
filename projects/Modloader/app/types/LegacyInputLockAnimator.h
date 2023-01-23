#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyInputLockAnimator__Class.h>
#include <Modloader/app/structs/LegacyInputLockAnimator.h>

namespace app::classes::types {
    namespace LegacyInputLockAnimator {
        namespace {
            inline app::LegacyInputLockAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyInputLockAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyInputLockAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyInputLockAnimator__Class>(type_info, "", "LegacyInputLockAnimator");
        }
        inline app::LegacyInputLockAnimator* create() {
            return il2cpp::create_object<app::LegacyInputLockAnimator>(get_class());
        }
    } // namespace LegacyInputLockAnimator
} // namespace app::classes::types
