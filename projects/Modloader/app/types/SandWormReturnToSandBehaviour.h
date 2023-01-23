#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormReturnToSandBehaviour__Class.h>
#include <Modloader/app/structs/SandWormReturnToSandBehaviour.h>

namespace app::classes::types {
    namespace SandWormReturnToSandBehaviour {
        namespace {
            inline app::SandWormReturnToSandBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SandWormReturnToSandBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormReturnToSandBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormReturnToSandBehaviour__Class>(type_info, "", "SandWormReturnToSandBehaviour");
        }
        inline app::SandWormReturnToSandBehaviour* create() {
            return il2cpp::create_object<app::SandWormReturnToSandBehaviour>(get_class());
        }
    } // namespace SandWormReturnToSandBehaviour
} // namespace app::classes::types
