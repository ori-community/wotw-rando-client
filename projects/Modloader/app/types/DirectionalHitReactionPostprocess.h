#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DirectionalHitReactionPostprocess {
        namespace {
            inline app::DirectionalHitReactionPostprocess__Class* type_info_ref = nullptr;
        }
        inline app::DirectionalHitReactionPostprocess__Class** type_info = &type_info_ref;
        inline app::DirectionalHitReactionPostprocess__Class* get_class() {
            return il2cpp::get_class<app::DirectionalHitReactionPostprocess__Class>(type_info, "Moon.Animation", "DirectionalHitReactionPostprocess");
        }
        inline app::DirectionalHitReactionPostprocess* create() {
            return il2cpp::create_object<app::DirectionalHitReactionPostprocess>(get_class());
        }
    } // namespace DirectionalHitReactionPostprocess
} // namespace app::classes::types
