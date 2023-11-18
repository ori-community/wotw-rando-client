#pragma once
#include <Modloader/app/structs/HasUnlockedAnyCutscenesCondition.h>
#include <Modloader/app/structs/HasUnlockedAnyCutscenesCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasUnlockedAnyCutscenesCondition {
        inline app::HasUnlockedAnyCutscenesCondition__Class** type_info() {
            static app::HasUnlockedAnyCutscenesCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasUnlockedAnyCutscenesCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasUnlockedAnyCutscenesCondition__Class* get_class() {
            return il2cpp::get_class<app::HasUnlockedAnyCutscenesCondition__Class>(type_info(), "", "HasUnlockedAnyCutscenesCondition");
        }
        inline app::HasUnlockedAnyCutscenesCondition* create() {
            return il2cpp::create_object<app::HasUnlockedAnyCutscenesCondition>(get_class());
        }
    } // namespace HasUnlockedAnyCutscenesCondition
} // namespace app::classes::types
