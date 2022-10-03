#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SuspendWhenOutOfFrustrumWithCondition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SuspendWhenOutOfFrustrumWithCondition__Class** type_info;
        inline app::SuspendWhenOutOfFrustrumWithCondition__Class* get_class() {
            return il2cpp::get_class<app::SuspendWhenOutOfFrustrumWithCondition__Class>(type_info, "", "SuspendWhenOutOfFrustrumWithCondition");
        }
        inline app::SuspendWhenOutOfFrustrumWithCondition* create() {
            return il2cpp::create_object<app::SuspendWhenOutOfFrustrumWithCondition>(get_class());
        }
    } // namespace SuspendWhenOutOfFrustrumWithCondition
} // namespace app::classes::types
