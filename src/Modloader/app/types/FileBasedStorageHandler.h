#pragma once
#include <Modloader/app/structs/FileBasedStorageHandler.h>
#include <Modloader/app/structs/FileBasedStorageHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileBasedStorageHandler {
        inline app::FileBasedStorageHandler__Class** type_info() {
            static app::FileBasedStorageHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileBasedStorageHandler__Class**)(modloader::win::memory::resolve_rva(0x0472E578));
            }
            return cache;
        }
        inline app::FileBasedStorageHandler__Class* get_class() {
            return il2cpp::get_class<app::FileBasedStorageHandler__Class>(type_info(), "frameworks.xboxLive", "FileBasedStorageHandler");
        }
        inline app::FileBasedStorageHandler* create() {
            return il2cpp::create_object<app::FileBasedStorageHandler>(get_class());
        }
    } // namespace FileBasedStorageHandler
} // namespace app::classes::types
