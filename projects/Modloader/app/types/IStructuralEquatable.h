#pragma once
#include <Modloader/app/structs/IStructuralEquatable.h>
#include <Modloader/app/structs/IStructuralEquatable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IStructuralEquatable {
        inline app::IStructuralEquatable__Class** type_info() {
            static app::IStructuralEquatable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IStructuralEquatable__Class**)(modloader::win::memory::resolve_rva(0x04718388));
            }
            return cache;
        }
        inline app::IStructuralEquatable__Class* get_class() {
            return il2cpp::get_class<app::IStructuralEquatable__Class>(type_info(), "System.Collections", "IStructuralEquatable");
        }
    } // namespace IStructuralEquatable
} // namespace app::classes::types
