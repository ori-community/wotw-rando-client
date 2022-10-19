#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileWebResponse {
        inline app::FileWebResponse__Class** type_info = (app::FileWebResponse__Class**)(modloader::win::memory::resolve_rva(0x047065F0));
        inline app::FileWebResponse__Class* get_class() {
            return il2cpp::get_class<app::FileWebResponse__Class>(type_info, "System.Net", "FileWebResponse");
        }
        inline app::FileWebResponse* create() {
            return il2cpp::create_object<app::FileWebResponse>(get_class());
        }
    } // namespace FileWebResponse
} // namespace app::classes::types
