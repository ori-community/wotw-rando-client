#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IReferenceResolver__Class.h>

namespace app::classes::types {
    namespace IReferenceResolver {
        inline app::IReferenceResolver__Class** type_info = (app::IReferenceResolver__Class**)(modloader::win::memory::resolve_rva(0x04735B60));
        inline app::IReferenceResolver__Class* get_class() {
            return il2cpp::get_class<app::IReferenceResolver__Class>(type_info, "Newtonsoft.Json.Serialization", "IReferenceResolver");
        }
    } // namespace IReferenceResolver
} // namespace app::classes::types
