#pragma once
#include <Modloader/app/structs/UberStateSaveFileHandler.h>
#include <Modloader/app/structs/UberStateSaveFileHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateSaveFileHandler {
        inline app::UberStateSaveFileHandler__Class** type_info() {
            static app::UberStateSaveFileHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateSaveFileHandler__Class**)(modloader::win::memory::resolve_rva(0x04702660));
            }
            return cache;
        }
        inline app::UberStateSaveFileHandler__Class* get_class() {
            return il2cpp::get_class<app::UberStateSaveFileHandler__Class>(type_info(), "Moon", "UberStateSaveFileHandler");
        }
        inline app::UberStateSaveFileHandler* create() {
            return il2cpp::create_object<app::UberStateSaveFileHandler>(get_class());
        }
    } // namespace UberStateSaveFileHandler
} // namespace app::classes::types
