#pragma once
#include <Modloader/app/structs/UberInteractionManager_PropertyIDCache.h>
#include <Modloader/app/structs/UberInteractionManager_PropertyIDCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_PropertyIDCache {
        inline app::UberInteractionManager_PropertyIDCache__Class** type_info() {
            static app::UberInteractionManager_PropertyIDCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionManager_PropertyIDCache__Class**)(modloader::win::memory::resolve_rva(0x04782020));
            }
            return cache;
        }
        inline app::UberInteractionManager_PropertyIDCache__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_PropertyIDCache__Class>(type_info(), "", "UberInteractionManager", "PropertyIDCache");
        }
        inline app::UberInteractionManager_PropertyIDCache* create() {
            return il2cpp::create_object<app::UberInteractionManager_PropertyIDCache>(get_class());
        }
    } // namespace UberInteractionManager_PropertyIDCache
} // namespace app::classes::types
