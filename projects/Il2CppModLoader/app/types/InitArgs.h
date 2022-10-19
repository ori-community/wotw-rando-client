#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InitArgs {
        inline app::InitArgs__Class** type_info = (app::InitArgs__Class**)(modloader::win::memory::resolve_rva(0x0473CA30));
        inline app::InitArgs__Class* get_class() {
            return il2cpp::get_class<app::InitArgs__Class>(type_info, "Microsoft.Xbox.Services.Xal", "InitArgs");
        }
        inline app::InitArgs* create() {
            return il2cpp::create_object<app::InitArgs>(get_class());
        }
    } // namespace InitArgs
} // namespace app::classes::types
