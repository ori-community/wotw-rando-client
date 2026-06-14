#pragma once
#include <Modloader/app/structs/IStructuralComparable.h>
#include <Modloader/app/structs/IStructuralComparable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IStructuralComparable {
        inline app::IStructuralComparable__Class** type_info() {
            static app::IStructuralComparable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IStructuralComparable__Class**)(modloader::win::memory::resolve_rva(0x04729BA8));
            }
            return cache;
        }
        inline app::IStructuralComparable__Class* get_class() {
            return il2cpp::get_class<app::IStructuralComparable__Class>(type_info(), "System.Collections", "IStructuralComparable");
        }
    } // namespace IStructuralComparable
} // namespace app::classes::types
