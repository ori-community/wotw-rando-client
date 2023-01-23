#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DirectionalHitReactionPostprocessState__Enum__Class.h>
#include <Modloader/app/structs/DirectionalHitReactionPostprocessState__Enum.h>

namespace app::classes::types {
    namespace DirectionalHitReactionPostprocessState__Enum {
        namespace {
            inline app::DirectionalHitReactionPostprocessState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DirectionalHitReactionPostprocessState__Enum__Class** type_info = &type_info_ref;
        inline app::DirectionalHitReactionPostprocessState__Enum__Class* get_class() {
            return il2cpp::get_class<app::DirectionalHitReactionPostprocessState__Enum__Class>(type_info, "Moon.Animation", "DirectionalHitReactionPostprocessState");
        }
        inline app::DirectionalHitReactionPostprocessState__Enum* create() {
            return il2cpp::create_object<app::DirectionalHitReactionPostprocessState__Enum>(get_class());
        }
    } // namespace DirectionalHitReactionPostprocessState__Enum
} // namespace app::classes::types
