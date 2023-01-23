#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormUnclogBehaviour__Class.h>
#include <Modloader/app/structs/SandWormUnclogBehaviour.h>

namespace app::classes::types {
    namespace SandWormUnclogBehaviour {
        namespace {
            inline app::SandWormUnclogBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SandWormUnclogBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormUnclogBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormUnclogBehaviour__Class>(type_info, "", "SandWormUnclogBehaviour");
        }
        inline app::SandWormUnclogBehaviour* create() {
            return il2cpp::create_object<app::SandWormUnclogBehaviour>(get_class());
        }
    } // namespace SandWormUnclogBehaviour
} // namespace app::classes::types
