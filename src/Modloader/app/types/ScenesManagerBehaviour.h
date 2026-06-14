#pragma once
#include <Modloader/app/structs/ScenesManagerBehaviour.h>
#include <Modloader/app/structs/ScenesManagerBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviour {
        inline app::ScenesManagerBehaviour__Class** type_info() {
            static app::ScenesManagerBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenesManagerBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenesManagerBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviour__Class>(type_info(), "", "ScenesManagerBehaviour");
        }
        inline app::ScenesManagerBehaviour* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviour>(get_class());
        }
    } // namespace ScenesManagerBehaviour
} // namespace app::classes::types
