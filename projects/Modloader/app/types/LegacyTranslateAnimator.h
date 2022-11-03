#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTranslateAnimator {
        namespace {
            inline app::LegacyTranslateAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyTranslateAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyTranslateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyTranslateAnimator__Class>(type_info, "", "LegacyTranslateAnimator");
        }
        inline app::LegacyTranslateAnimator* create() {
            return il2cpp::create_object<app::LegacyTranslateAnimator>(get_class());
        }
    } // namespace LegacyTranslateAnimator
} // namespace app::classes::types
