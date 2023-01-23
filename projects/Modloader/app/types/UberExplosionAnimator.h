#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberExplosionAnimator__Class.h>
#include <Modloader/app/structs/UberExplosionAnimator.h>

namespace app::classes::types {
    namespace UberExplosionAnimator {
        namespace {
            inline app::UberExplosionAnimator__Class* type_info_ref = nullptr;
        }
        inline app::UberExplosionAnimator__Class** type_info = &type_info_ref;
        inline app::UberExplosionAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberExplosionAnimator__Class>(type_info, "", "UberExplosionAnimator");
        }
        inline app::UberExplosionAnimator* create() {
            return il2cpp::create_object<app::UberExplosionAnimator>(get_class());
        }
    } // namespace UberExplosionAnimator
} // namespace app::classes::types
