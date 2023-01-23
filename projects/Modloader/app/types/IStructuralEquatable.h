#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IStructuralEquatable__Class.h>

namespace app::classes::types {
    namespace IStructuralEquatable {
        inline app::IStructuralEquatable__Class** type_info = (app::IStructuralEquatable__Class**)(modloader::win::memory::resolve_rva(0x04718388));
        inline app::IStructuralEquatable__Class* get_class() {
            return il2cpp::get_class<app::IStructuralEquatable__Class>(type_info, "System.Collections", "IStructuralEquatable");
        }
    } // namespace IStructuralEquatable
} // namespace app::classes::types
