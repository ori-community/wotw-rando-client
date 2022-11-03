#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BooleanUberStateCondition {
        inline app::BooleanUberStateCondition__Class** type_info = (app::BooleanUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x047770F8));
        inline app::BooleanUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberStateCondition__Class>(type_info, "", "BooleanUberStateCondition");
        }
        inline app::BooleanUberStateCondition* create() {
            return il2cpp::create_object<app::BooleanUberStateCondition>(get_class());
        }
    } // namespace BooleanUberStateCondition
} // namespace app::classes::types
