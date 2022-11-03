#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeverCondition {
        namespace {
            inline app::LeverCondition__Class* type_info_ref = nullptr;
        }
        inline app::LeverCondition__Class** type_info = &type_info_ref;
        inline app::LeverCondition__Class* get_class() {
            return il2cpp::get_class<app::LeverCondition__Class>(type_info, "", "LeverCondition");
        }
        inline app::LeverCondition* create() {
            return il2cpp::create_object<app::LeverCondition>(get_class());
        }
    } // namespace LeverCondition
} // namespace app::classes::types
