#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberExplosionAnimator_ExplosionType__Enum__Class.h>
#include <Modloader/app/structs/UberExplosionAnimator_ExplosionType__Enum.h>

namespace app::classes::types {
    namespace UberExplosionAnimator_ExplosionType__Enum {
        namespace {
            inline app::UberExplosionAnimator_ExplosionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberExplosionAnimator_ExplosionType__Enum__Class** type_info = &type_info_ref;
        inline app::UberExplosionAnimator_ExplosionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberExplosionAnimator_ExplosionType__Enum__Class>(type_info, "", "UberExplosionAnimator", "ExplosionType");
        }
        inline app::UberExplosionAnimator_ExplosionType__Enum* create() {
            return il2cpp::create_object<app::UberExplosionAnimator_ExplosionType__Enum>(get_class());
        }
    } // namespace UberExplosionAnimator_ExplosionType__Enum
} // namespace app::classes::types
