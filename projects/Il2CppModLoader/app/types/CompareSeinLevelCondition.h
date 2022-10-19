#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompareSeinLevelCondition {
        namespace {
            inline app::CompareSeinLevelCondition__Class* type_info_ref = nullptr;
        }
        inline app::CompareSeinLevelCondition__Class** type_info = &type_info_ref;
        inline app::CompareSeinLevelCondition__Class* get_class() {
            return il2cpp::get_class<app::CompareSeinLevelCondition__Class>(type_info, "", "CompareSeinLevelCondition");
        }
        inline app::CompareSeinLevelCondition* create() {
            return il2cpp::create_object<app::CompareSeinLevelCondition>(get_class());
        }
    } // namespace CompareSeinLevelCondition
} // namespace app::classes::types
