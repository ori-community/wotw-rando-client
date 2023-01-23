#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyInstantiateAnimator__Class.h>
#include <Modloader/app/structs/LegacyInstantiateAnimator.h>

namespace app::classes::types {
    namespace LegacyInstantiateAnimator {
        namespace {
            inline app::LegacyInstantiateAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyInstantiateAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyInstantiateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyInstantiateAnimator__Class>(type_info, "", "LegacyInstantiateAnimator");
        }
        inline app::LegacyInstantiateAnimator* create() {
            return il2cpp::create_object<app::LegacyInstantiateAnimator>(get_class());
        }
    } // namespace LegacyInstantiateAnimator
} // namespace app::classes::types
