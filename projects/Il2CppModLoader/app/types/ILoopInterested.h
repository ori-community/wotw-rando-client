#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILoopInterested {
        inline app::ILoopInterested__Class** type_info = (app::ILoopInterested__Class**)(modloader::win::memory::resolve_rva(0x0474B578));
        inline app::ILoopInterested__Class* get_class() {
            return il2cpp::get_class<app::ILoopInterested__Class>(type_info, "Moon.Timeline", "ILoopInterested");
        }
    } // namespace ILoopInterested
} // namespace app::classes::types
