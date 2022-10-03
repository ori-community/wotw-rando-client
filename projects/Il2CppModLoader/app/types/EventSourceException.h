#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventSourceException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventSourceException__Class** type_info;
        inline app::EventSourceException__Class* get_class() {
            return il2cpp::get_class<app::EventSourceException__Class>(type_info, "System.Diagnostics.Tracing", "EventSourceException");
        }
        inline app::EventSourceException* create() {
            return il2cpp::create_object<app::EventSourceException>(get_class());
        }
    } // namespace EventSourceException
} // namespace app::classes::types
