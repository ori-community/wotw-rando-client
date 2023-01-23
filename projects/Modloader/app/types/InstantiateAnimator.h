#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InstantiateAnimator__Class.h>
#include <Modloader/app/structs/InstantiateAnimator.h>

namespace app::classes::types {
    namespace InstantiateAnimator {
        namespace {
            inline app::InstantiateAnimator__Class* type_info_ref = nullptr;
        }
        inline app::InstantiateAnimator__Class** type_info = &type_info_ref;
        inline app::InstantiateAnimator__Class* get_class() {
            return il2cpp::get_class<app::InstantiateAnimator__Class>(type_info, "Moon.Timeline", "InstantiateAnimator");
        }
        inline app::InstantiateAnimator* create() {
            return il2cpp::create_object<app::InstantiateAnimator>(get_class());
        }
    } // namespace InstantiateAnimator
} // namespace app::classes::types
