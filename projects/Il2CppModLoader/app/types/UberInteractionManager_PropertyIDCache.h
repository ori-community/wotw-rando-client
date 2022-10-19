#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberInteractionManager_PropertyIDCache {
        inline app::UberInteractionManager_PropertyIDCache__Class** type_info = (app::UberInteractionManager_PropertyIDCache__Class**)(modloader::win::memory::resolve_rva(0x04782020));
        inline app::UberInteractionManager_PropertyIDCache__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_PropertyIDCache__Class>(type_info, "", "UberInteractionManager", "PropertyIDCache");
        }
        inline app::UberInteractionManager_PropertyIDCache* create() {
            return il2cpp::create_object<app::UberInteractionManager_PropertyIDCache>(get_class());
        }
    } // namespace UberInteractionManager_PropertyIDCache
} // namespace app::classes::types
