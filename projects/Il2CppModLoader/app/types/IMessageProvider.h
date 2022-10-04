#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMessageProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMessageProvider__Class** type_info;
        inline app::IMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::IMessageProvider__Class>(type_info, "Moon.InteractionGraph", "IMessageProvider");
        }
    } // namespace IMessageProvider
} // namespace app::classes::types
