#pragma once
#include <Modloader/app/structs/XboxOneFileBasedStorageHandler.h>
#include <Modloader/app/structs/XboxOneFileBasedStorageHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneFileBasedStorageHandler {
        inline app::XboxOneFileBasedStorageHandler__Class** type_info() {
            static app::XboxOneFileBasedStorageHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneFileBasedStorageHandler__Class**)(modloader::win::memory::resolve_rva(0x04750280));
            }
            return cache;
        }
        inline app::XboxOneFileBasedStorageHandler__Class* get_class() {
            return il2cpp::get_class<app::XboxOneFileBasedStorageHandler__Class>(type_info(), "frameworks.xboxLive", "XboxOneFileBasedStorageHandler");
        }
        inline app::XboxOneFileBasedStorageHandler* create() {
            return il2cpp::create_object<app::XboxOneFileBasedStorageHandler>(get_class());
        }
    } // namespace XboxOneFileBasedStorageHandler
} // namespace app::classes::types
