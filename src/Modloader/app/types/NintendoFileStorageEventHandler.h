#pragma once
#include <Modloader/app/structs/NintendoFileStorageEventHandler.h>
#include <Modloader/app/structs/NintendoFileStorageEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoFileStorageEventHandler {
        inline app::NintendoFileStorageEventHandler__Class** type_info() {
            static app::NintendoFileStorageEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NintendoFileStorageEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0470EBC0));
            }
            return cache;
        }
        inline app::NintendoFileStorageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::NintendoFileStorageEventHandler__Class>(type_info(), "frameworks.xboxLive", "NintendoFileStorageEventHandler");
        }
        inline app::NintendoFileStorageEventHandler* create() {
            return il2cpp::create_object<app::NintendoFileStorageEventHandler>(get_class());
        }
    } // namespace NintendoFileStorageEventHandler
} // namespace app::classes::types
