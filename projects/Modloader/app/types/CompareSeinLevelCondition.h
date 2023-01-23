#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CompareSeinLevelCondition__Class.h>
#include <Modloader/app/structs/CompareSeinLevelCondition.h>

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
