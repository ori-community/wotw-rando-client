#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CachingEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CachingEventHandler__Class** type_info;
        inline app::CachingEventHandler__Class* get_class() {
            return il2cpp::get_class<app::CachingEventHandler__Class>(type_info, "System.Xml", "CachingEventHandler");
        }
        inline app::CachingEventHandler* create() {
            return il2cpp::create_object<app::CachingEventHandler>(get_class());
        }
    } // namespace CachingEventHandler
} // namespace app::classes::types
