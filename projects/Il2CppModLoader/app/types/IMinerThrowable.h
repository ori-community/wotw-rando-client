#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMinerThrowable {
        inline app::IMinerThrowable__Class** type_info = (app::IMinerThrowable__Class**)(modloader::win::memory::resolve_rva(0x04706510));
        inline app::IMinerThrowable__Class* get_class() {
            return il2cpp::get_class<app::IMinerThrowable__Class>(type_info, "", "IMinerThrowable");
        }
    } // namespace IMinerThrowable
} // namespace app::classes::types
