#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver_IntEqualityComparer {
        inline app::NewSetupStateControllerResolver_IntEqualityComparer__Class** type_info = (app::NewSetupStateControllerResolver_IntEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x047731D0));
        inline app::NewSetupStateControllerResolver_IntEqualityComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::NewSetupStateControllerResolver_IntEqualityComparer__Class>(type_info, "Moon", "NewSetupStateControllerResolver", "IntEqualityComparer");
        }
        inline app::NewSetupStateControllerResolver_IntEqualityComparer* create() {
            return il2cpp::create_object<app::NewSetupStateControllerResolver_IntEqualityComparer>(get_class());
        }
    } // namespace NewSetupStateControllerResolver_IntEqualityComparer
} // namespace app::classes::types
