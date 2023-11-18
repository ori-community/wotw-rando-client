#pragma once
#include <Modloader/app/structs/IReferenceService.h>
#include <Modloader/app/structs/IReferenceService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IReferenceService {
        inline app::IReferenceService__Class** type_info() {
            static app::IReferenceService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IReferenceService__Class**)(modloader::win::memory::resolve_rva(0x0470A3A8));
            }
            return cache;
        }
        inline app::IReferenceService__Class* get_class() {
            return il2cpp::get_class<app::IReferenceService__Class>(type_info(), "System.ComponentModel.Design", "IReferenceService");
        }
    } // namespace IReferenceService
} // namespace app::classes::types
