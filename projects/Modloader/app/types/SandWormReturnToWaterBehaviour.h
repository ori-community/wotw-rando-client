#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormReturnToWaterBehaviour__Class.h>
#include <Modloader/app/structs/SandWormReturnToWaterBehaviour.h>

namespace app::classes::types {
    namespace SandWormReturnToWaterBehaviour {
        namespace {
            inline app::SandWormReturnToWaterBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SandWormReturnToWaterBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormReturnToWaterBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormReturnToWaterBehaviour__Class>(type_info, "", "SandWormReturnToWaterBehaviour");
        }
        inline app::SandWormReturnToWaterBehaviour* create() {
            return il2cpp::create_object<app::SandWormReturnToWaterBehaviour>(get_class());
        }
    } // namespace SandWormReturnToWaterBehaviour
} // namespace app::classes::types
