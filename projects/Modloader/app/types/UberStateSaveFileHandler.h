#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateSaveFileHandler__Class.h>
#include <Modloader/app/structs/UberStateSaveFileHandler.h>

namespace app::classes::types {
    namespace UberStateSaveFileHandler {
        inline app::UberStateSaveFileHandler__Class** type_info = (app::UberStateSaveFileHandler__Class**)(modloader::win::memory::resolve_rva(0x04702660));
        inline app::UberStateSaveFileHandler__Class* get_class() {
            return il2cpp::get_class<app::UberStateSaveFileHandler__Class>(type_info, "Moon", "UberStateSaveFileHandler");
        }
        inline app::UberStateSaveFileHandler* create() {
            return il2cpp::create_object<app::UberStateSaveFileHandler>(get_class());
        }
    } // namespace UberStateSaveFileHandler
} // namespace app::classes::types
