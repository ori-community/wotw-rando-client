#pragma once
#include <Modloader/app/structs/DirectionalHitReactionPostprocessState__Enum.h>
#include <Modloader/app/structs/DirectionalHitReactionPostprocessState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectionalHitReactionPostprocessState__Enum {
        inline app::DirectionalHitReactionPostprocessState__Enum__Class** type_info() {
            static app::DirectionalHitReactionPostprocessState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DirectionalHitReactionPostprocessState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DirectionalHitReactionPostprocessState__Enum__Class* get_class() {
            return il2cpp::get_class<app::DirectionalHitReactionPostprocessState__Enum__Class>(type_info(), "Moon.Animation", "DirectionalHitReactionPostprocessState");
        }
        inline app::DirectionalHitReactionPostprocessState__Enum* create() {
            return il2cpp::create_object<app::DirectionalHitReactionPostprocessState__Enum>(get_class());
        }
    } // namespace DirectionalHitReactionPostprocessState__Enum
} // namespace app::classes::types
