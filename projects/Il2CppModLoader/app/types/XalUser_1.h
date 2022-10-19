#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalUser_1 {
        inline app::XalUser_1__Class** type_info = (app::XalUser_1__Class**)(modloader::win::memory::resolve_rva(0x04791520));
        inline app::XalUser_1__Class* get_class() {
            return il2cpp::get_class<app::XalUser_1__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUser");
        }
        inline app::XalUser_1* create() {
            return il2cpp::create_object<app::XalUser_1>(get_class());
        }
    } // namespace XalUser_1
} // namespace app::classes::types
