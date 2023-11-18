#pragma once
#include <Modloader/app/structs/GRDKStorageHandler.h>
#include <Modloader/app/structs/GRDKStorageHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GRDKStorageHandler {
        inline app::GRDKStorageHandler__Class** type_info() {
            static app::GRDKStorageHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GRDKStorageHandler__Class**)(modloader::win::memory::resolve_rva(0x047740C8));
            }
            return cache;
        }
        inline app::GRDKStorageHandler__Class* get_class() {
            return il2cpp::get_class<app::GRDKStorageHandler__Class>(type_info(), "frameworks.xboxLive", "GRDKStorageHandler");
        }
        inline app::GRDKStorageHandler* create() {
            return il2cpp::create_object<app::GRDKStorageHandler>(get_class());
        }
    } // namespace GRDKStorageHandler
} // namespace app::classes::types
