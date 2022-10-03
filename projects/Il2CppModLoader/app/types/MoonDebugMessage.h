#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonDebugMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonDebugMessage__Class** type_info;
        inline app::MoonDebugMessage__Class* get_class() {
            return il2cpp::get_class<app::MoonDebugMessage__Class>(type_info, "Moon", "MoonDebugMessage");
        }
        inline app::MoonDebugMessage* create() {
            return il2cpp::create_object<app::MoonDebugMessage>(get_class());
        }
        inline app::MoonDebugMessage__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonDebugMessage__Array>(get_class(), size);
        }
    } // namespace MoonDebugMessage
} // namespace app::classes::types
