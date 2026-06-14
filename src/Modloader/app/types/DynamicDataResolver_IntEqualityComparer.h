#pragma once
#include <Modloader/app/structs/DynamicDataResolver_IntEqualityComparer.h>
#include <Modloader/app/structs/DynamicDataResolver_IntEqualityComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicDataResolver_IntEqualityComparer {
        inline app::DynamicDataResolver_IntEqualityComparer__Class** type_info() {
            static app::DynamicDataResolver_IntEqualityComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicDataResolver_IntEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x04777720));
            }
            return cache;
        }
        inline app::DynamicDataResolver_IntEqualityComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataResolver_IntEqualityComparer__Class>(type_info(), "Moon", "DynamicDataResolver", "IntEqualityComparer");
        }
        inline app::DynamicDataResolver_IntEqualityComparer* create() {
            return il2cpp::create_object<app::DynamicDataResolver_IntEqualityComparer>(get_class());
        }
    } // namespace DynamicDataResolver_IntEqualityComparer
} // namespace app::classes::types
