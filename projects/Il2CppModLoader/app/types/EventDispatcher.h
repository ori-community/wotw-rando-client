#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventDispatcher {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventDispatcher__Class** type_info;
        inline app::EventDispatcher__Class* get_class() {
            return il2cpp::get_class<app::EventDispatcher__Class>(type_info, "System.Diagnostics.Tracing", "EventDispatcher");
        }
        inline app::EventDispatcher* create() {
            return il2cpp::create_object<app::EventDispatcher>(get_class());
        }
    } // namespace EventDispatcher
} // namespace app::classes::types
