#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILoopInterested {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILoopInterested__Class** type_info;
        inline app::ILoopInterested__Class* get_class() {
            return il2cpp::get_class<app::ILoopInterested__Class>(type_info, "Moon.Timeline", "ILoopInterested");
        }
    } // namespace ILoopInterested
} // namespace app::classes::types
