#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKillReciever {
        inline app::IKillReciever__Class** type_info = (app::IKillReciever__Class**)(modloader::win::memory::resolve_rva(0x04704E10));
        inline app::IKillReciever__Class* get_class() {
            return il2cpp::get_class<app::IKillReciever__Class>(type_info, "", "IKillReciever");
        }
    } // namespace IKillReciever
} // namespace app::classes::types
