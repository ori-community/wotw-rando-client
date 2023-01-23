#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormEntity_SandWormBodyAnimation__Class.h>
#include <Modloader/app/structs/SandWormEntity_SandWormBodyAnimation.h>

namespace app::classes::types {
    namespace SandWormEntity_SandWormBodyAnimation {
        namespace {
            inline app::SandWormEntity_SandWormBodyAnimation__Class* type_info_ref = nullptr;
        }
        inline app::SandWormEntity_SandWormBodyAnimation__Class** type_info = &type_info_ref;
        inline app::SandWormEntity_SandWormBodyAnimation__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_SandWormBodyAnimation__Class>(type_info, "", "SandWormEntity", "SandWormBodyAnimation");
        }
        inline app::SandWormEntity_SandWormBodyAnimation* create() {
            return il2cpp::create_object<app::SandWormEntity_SandWormBodyAnimation>(get_class());
        }
    } // namespace SandWormEntity_SandWormBodyAnimation
} // namespace app::classes::types
