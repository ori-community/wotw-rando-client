#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PathFollowingPlatform {
        namespace {
            inline app::PathFollowingPlatform__Class* type_info_ref = nullptr;
        }
        inline app::PathFollowingPlatform__Class** type_info = &type_info_ref;
        inline app::PathFollowingPlatform__Class* get_class() {
            return il2cpp::get_class<app::PathFollowingPlatform__Class>(type_info, "Moon", "PathFollowingPlatform");
        }
        inline app::PathFollowingPlatform* create() {
            return il2cpp::create_object<app::PathFollowingPlatform>(get_class());
        }
    } // namespace PathFollowingPlatform
} // namespace app::classes::types
