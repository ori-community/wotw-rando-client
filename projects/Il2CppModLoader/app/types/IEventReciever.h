#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEventReciever {
        inline app::IEventReciever__Class** type_info = (app::IEventReciever__Class**)(modloader::win::memory::resolve_rva(0x0471ED88));
        inline app::IEventReciever__Class* get_class() {
            return il2cpp::get_class<app::IEventReciever__Class>(type_info, "Moon.Timeline", "IEventReciever");
        }
    } // namespace IEventReciever
} // namespace app::classes::types
