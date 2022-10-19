#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneFileBasedStorageHandler {
        inline app::XboxOneFileBasedStorageHandler__Class** type_info = (app::XboxOneFileBasedStorageHandler__Class**)(modloader::win::memory::resolve_rva(0x04750280));
        inline app::XboxOneFileBasedStorageHandler__Class* get_class() {
            return il2cpp::get_class<app::XboxOneFileBasedStorageHandler__Class>(type_info, "frameworks.xboxLive", "XboxOneFileBasedStorageHandler");
        }
        inline app::XboxOneFileBasedStorageHandler* create() {
            return il2cpp::create_object<app::XboxOneFileBasedStorageHandler>(get_class());
        }
    } // namespace XboxOneFileBasedStorageHandler
} // namespace app::classes::types
