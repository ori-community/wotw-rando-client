#pragma once
#include <Modloader/app/structs/SandWormUnclogBehaviour.h>
#include <Modloader/app/structs/SandWormUnclogBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormUnclogBehaviour {
        inline app::SandWormUnclogBehaviour__Class** type_info() {
            static app::SandWormUnclogBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormUnclogBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormUnclogBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormUnclogBehaviour__Class>(type_info(), "", "SandWormUnclogBehaviour");
        }
        inline app::SandWormUnclogBehaviour* create() {
            return il2cpp::create_object<app::SandWormUnclogBehaviour>(get_class());
        }
    } // namespace SandWormUnclogBehaviour
} // namespace app::classes::types
