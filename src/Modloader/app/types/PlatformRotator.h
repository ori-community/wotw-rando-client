#pragma once
#include <Modloader/app/structs/PlatformRotator.h>
#include <Modloader/app/structs/PlatformRotator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformRotator {
        inline app::PlatformRotator__Class** type_info() {
            static app::PlatformRotator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlatformRotator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlatformRotator__Class* get_class() {
            return il2cpp::get_class<app::PlatformRotator__Class>(type_info(), "RootMotion.Demos", "PlatformRotator");
        }
        inline app::PlatformRotator* create() {
            return il2cpp::create_object<app::PlatformRotator>(get_class());
        }
    } // namespace PlatformRotator
} // namespace app::classes::types
