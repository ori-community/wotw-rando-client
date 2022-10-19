#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRequestCallback {
        inline app::IRequestCallback__Class** type_info = (app::IRequestCallback__Class**)(modloader::win::memory::resolve_rva(0x04798088));
        inline app::IRequestCallback__Class* get_class() {
            return il2cpp::get_class<app::IRequestCallback__Class>(type_info, "Moon.Network.Web", "IRequestCallback");
        }
    } // namespace IRequestCallback
} // namespace app::classes::types
