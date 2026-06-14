#pragma once
#include <Modloader/app/structs/OverlapPlatformActivator.h>
#include <Modloader/app/structs/OverlapPlatformActivator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OverlapPlatformActivator {
        inline app::OverlapPlatformActivator__Class** type_info() {
            static app::OverlapPlatformActivator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OverlapPlatformActivator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OverlapPlatformActivator__Class* get_class() {
            return il2cpp::get_class<app::OverlapPlatformActivator__Class>(type_info(), "", "OverlapPlatformActivator");
        }
        inline app::OverlapPlatformActivator* create() {
            return il2cpp::create_object<app::OverlapPlatformActivator>(get_class());
        }
    } // namespace OverlapPlatformActivator
} // namespace app::classes::types
