#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyRotateAnimator__Class.h>
#include <Modloader/app/structs/LegacyRotateAnimator.h>

namespace app::classes::types {
    namespace LegacyRotateAnimator {
        namespace {
            inline app::LegacyRotateAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyRotateAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyRotateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyRotateAnimator__Class>(type_info, "", "LegacyRotateAnimator");
        }
        inline app::LegacyRotateAnimator* create() {
            return il2cpp::create_object<app::LegacyRotateAnimator>(get_class());
        }
    } // namespace LegacyRotateAnimator
} // namespace app::classes::types
