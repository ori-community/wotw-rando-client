#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IReferenceRebuilder {
        inline app::IReferenceRebuilder__Class** type_info = (app::IReferenceRebuilder__Class**)(modloader::win::memory::resolve_rva(0x0478E2E8));
        inline app::IReferenceRebuilder__Class* get_class() {
            return il2cpp::get_class<app::IReferenceRebuilder__Class>(type_info, "", "IReferenceRebuilder");
        }
    } // namespace IReferenceRebuilder
} // namespace app::classes::types
