#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DialogGraph_MessageFinishedCondition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DialogGraph_MessageFinishedCondition__Class** type_info;
        inline app::DialogGraph_MessageFinishedCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogGraph_MessageFinishedCondition__Class>(type_info, "", "DialogGraph", "MessageFinishedCondition");
        }
        inline app::DialogGraph_MessageFinishedCondition* create() {
            return il2cpp::create_object<app::DialogGraph_MessageFinishedCondition>(get_class());
        }
    } // namespace DialogGraph_MessageFinishedCondition
} // namespace app::classes::types
