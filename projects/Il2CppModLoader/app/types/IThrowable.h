#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IThrowable {
        inline app::IThrowable__Class** type_info = (app::IThrowable__Class**)(modloader::win::memory::resolve_rva(0x047485B8));
        inline app::IThrowable__Class* get_class() {
            return il2cpp::get_class<app::IThrowable__Class>(type_info, "Moon", "IThrowable");
        }
    } // namespace IThrowable
} // namespace app::classes::types
