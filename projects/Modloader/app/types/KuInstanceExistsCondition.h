#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuInstanceExistsCondition {
        namespace {
            inline app::KuInstanceExistsCondition__Class* type_info_ref = nullptr;
        }
        inline app::KuInstanceExistsCondition__Class** type_info = &type_info_ref;
        inline app::KuInstanceExistsCondition__Class* get_class() {
            return il2cpp::get_class<app::KuInstanceExistsCondition__Class>(type_info, "", "KuInstanceExistsCondition");
        }
        inline app::KuInstanceExistsCondition* create() {
            return il2cpp::create_object<app::KuInstanceExistsCondition>(get_class());
        }
    } // namespace KuInstanceExistsCondition
} // namespace app::classes::types
