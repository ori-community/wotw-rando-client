#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveFileExistsCondition {
        namespace {
            inline app::SaveFileExistsCondition__Class* type_info_ref = nullptr;
        }
        inline app::SaveFileExistsCondition__Class** type_info = &type_info_ref;
        inline app::SaveFileExistsCondition__Class* get_class() {
            return il2cpp::get_class<app::SaveFileExistsCondition__Class>(type_info, "", "SaveFileExistsCondition");
        }
        inline app::SaveFileExistsCondition* create() {
            return il2cpp::create_object<app::SaveFileExistsCondition>(get_class());
        }
    } // namespace SaveFileExistsCondition
} // namespace app::classes::types
