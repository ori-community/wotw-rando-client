#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GRDKStorageHandler {
        inline app::GRDKStorageHandler__Class** type_info = (app::GRDKStorageHandler__Class**)(modloader::win::memory::resolve_rva(0x047740C8));
        inline app::GRDKStorageHandler__Class* get_class() {
            return il2cpp::get_class<app::GRDKStorageHandler__Class>(type_info, "frameworks.xboxLive", "GRDKStorageHandler");
        }
        inline app::GRDKStorageHandler* create() {
            return il2cpp::create_object<app::GRDKStorageHandler>(get_class());
        }
    } // namespace GRDKStorageHandler
} // namespace app::classes::types
