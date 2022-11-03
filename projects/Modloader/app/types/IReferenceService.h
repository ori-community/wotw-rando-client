#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IReferenceService {
        inline app::IReferenceService__Class** type_info = (app::IReferenceService__Class**)(modloader::win::memory::resolve_rva(0x0470A3A8));
        inline app::IReferenceService__Class* get_class() {
            return il2cpp::get_class<app::IReferenceService__Class>(type_info, "System.ComponentModel.Design", "IReferenceService");
        }
    } // namespace IReferenceService
} // namespace app::classes::types
