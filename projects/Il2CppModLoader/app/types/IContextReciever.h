#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContextReciever {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContextReciever__Class** type_info;
        inline app::IContextReciever__Class* get_class() {
            return il2cpp::get_class<app::IContextReciever__Class>(type_info, "", "IContextReciever");
        }
    } // namespace IContextReciever
} // namespace app::classes::types
