#pragma once
#include <Modloader/app/structs/PlatformImplementation.h>
#include <Modloader/app/structs/PlatformImplementation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformImplementation {
        inline app::PlatformImplementation__Class** type_info() {
            static app::PlatformImplementation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlatformImplementation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlatformImplementation__Class* get_class() {
            return il2cpp::get_class<app::PlatformImplementation__Class>(type_info(), "Moon", "PlatformImplementation");
        }
        inline app::PlatformImplementation* create() {
            return il2cpp::create_object<app::PlatformImplementation>(get_class());
        }
    } // namespace PlatformImplementation
} // namespace app::classes::types
