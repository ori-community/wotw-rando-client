#pragma once
#include <Modloader/app/structs/IReferenceRebuilder.h>
#include <Modloader/app/structs/IReferenceRebuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IReferenceRebuilder {
        inline app::IReferenceRebuilder__Class** type_info() {
            static app::IReferenceRebuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IReferenceRebuilder__Class**)(modloader::win::memory::resolve_rva(0x0478E2E8));
            }
            return cache;
        }
        inline app::IReferenceRebuilder__Class* get_class() {
            return il2cpp::get_class<app::IReferenceRebuilder__Class>(type_info(), "", "IReferenceRebuilder");
        }
    } // namespace IReferenceRebuilder
} // namespace app::classes::types
