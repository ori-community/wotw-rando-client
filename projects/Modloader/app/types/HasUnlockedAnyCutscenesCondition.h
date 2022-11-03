#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HasUnlockedAnyCutscenesCondition {
        namespace {
            inline app::HasUnlockedAnyCutscenesCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasUnlockedAnyCutscenesCondition__Class** type_info = &type_info_ref;
        inline app::HasUnlockedAnyCutscenesCondition__Class* get_class() {
            return il2cpp::get_class<app::HasUnlockedAnyCutscenesCondition__Class>(type_info, "", "HasUnlockedAnyCutscenesCondition");
        }
        inline app::HasUnlockedAnyCutscenesCondition* create() {
            return il2cpp::create_object<app::HasUnlockedAnyCutscenesCondition>(get_class());
        }
    } // namespace HasUnlockedAnyCutscenesCondition
} // namespace app::classes::types
