#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BabyWormAnimation__Class.h>
#include <Modloader/app/structs/BabyWormAnimation.h>

namespace app::classes::types {
    namespace BabyWormAnimation {
        namespace {
            inline app::BabyWormAnimation__Class* type_info_ref = nullptr;
        }
        inline app::BabyWormAnimation__Class** type_info = &type_info_ref;
        inline app::BabyWormAnimation__Class* get_class() {
            return il2cpp::get_class<app::BabyWormAnimation__Class>(type_info, "", "BabyWormAnimation");
        }
        inline app::BabyWormAnimation* create() {
            return il2cpp::create_object<app::BabyWormAnimation>(get_class());
        }
    } // namespace BabyWormAnimation
} // namespace app::classes::types
