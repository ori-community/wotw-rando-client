#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightningAnimator__Class.h>
#include <Modloader/app/structs/LightningAnimator.h>

namespace app::classes::types {
    namespace LightningAnimator {
        namespace {
            inline app::LightningAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LightningAnimator__Class** type_info = &type_info_ref;
        inline app::LightningAnimator__Class* get_class() {
            return il2cpp::get_class<app::LightningAnimator__Class>(type_info, "", "LightningAnimator");
        }
        inline app::LightningAnimator* create() {
            return il2cpp::create_object<app::LightningAnimator>(get_class());
        }
    } // namespace LightningAnimator
} // namespace app::classes::types
