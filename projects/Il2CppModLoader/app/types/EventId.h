#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventId {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventId__Class** type_info;
        inline app::EventId__Class* get_class() {
            return il2cpp::get_class<app::EventId__Class>(type_info, "Moon.Timeline", "EventId");
        }
        inline app::EventId* create() {
            return il2cpp::create_object<app::EventId>(get_class());
        }
    } // namespace EventId
} // namespace app::classes::types
