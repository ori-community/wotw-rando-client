#pragma once
#include <Modloader/app/structs/PlatformBehaviour.h>
#include <Modloader/app/structs/PlatformBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformBehaviour {
        inline app::PlatformBehaviour__Class** type_info() {
            static app::PlatformBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlatformBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlatformBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PlatformBehaviour__Class>(type_info(), "", "PlatformBehaviour");
        }
        inline app::PlatformBehaviour* create() {
            return il2cpp::create_object<app::PlatformBehaviour>(get_class());
        }
    } // namespace PlatformBehaviour
} // namespace app::classes::types
