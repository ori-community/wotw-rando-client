#pragma once
#include <Modloader/app/structs/BinaryCompatibility.h>
#include <Modloader/app/structs/BinaryCompatibility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryCompatibility {
        inline app::BinaryCompatibility__Class** type_info() {
            static app::BinaryCompatibility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryCompatibility__Class**)(modloader::win::memory::resolve_rva(0x0476A5E0));
            }
            return cache;
        }
        inline app::BinaryCompatibility__Class* get_class() {
            return il2cpp::get_class<app::BinaryCompatibility__Class>(type_info(), "System.Runtime.Versioning", "BinaryCompatibility");
        }
        inline app::BinaryCompatibility* create() {
            return il2cpp::create_object<app::BinaryCompatibility>(get_class());
        }
    } // namespace BinaryCompatibility
} // namespace app::classes::types
