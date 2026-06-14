#pragma once
#include <Modloader/app/structs/NewSetupStateControllerResolver_IntEqualityComparer.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_IntEqualityComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver_IntEqualityComparer {
        inline app::NewSetupStateControllerResolver_IntEqualityComparer__Class** type_info() {
            static app::NewSetupStateControllerResolver_IntEqualityComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewSetupStateControllerResolver_IntEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x047731D0));
            }
            return cache;
        }
        inline app::NewSetupStateControllerResolver_IntEqualityComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::NewSetupStateControllerResolver_IntEqualityComparer__Class>(type_info(), "Moon", "NewSetupStateControllerResolver", "IntEqualityComparer");
        }
        inline app::NewSetupStateControllerResolver_IntEqualityComparer* create() {
            return il2cpp::create_object<app::NewSetupStateControllerResolver_IntEqualityComparer>(get_class());
        }
    } // namespace NewSetupStateControllerResolver_IntEqualityComparer
} // namespace app::classes::types
