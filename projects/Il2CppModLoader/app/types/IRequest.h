#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRequest__Class** type_info;
        inline app::IRequest__Class* get_class() {
            return il2cpp::get_class<app::IRequest__Class>(type_info, "Moon.Network.Web", "IRequest");
        }
    } // namespace IRequest
} // namespace app::classes::types
