#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CanBackOutCondition__Class.h>
#include <Modloader/app/structs/CanBackOutCondition.h>

namespace app::classes::types {
    namespace CanBackOutCondition {
        namespace {
            inline app::CanBackOutCondition__Class* type_info_ref = nullptr;
        }
        inline app::CanBackOutCondition__Class** type_info = &type_info_ref;
        inline app::CanBackOutCondition__Class* get_class() {
            return il2cpp::get_class<app::CanBackOutCondition__Class>(type_info, "", "CanBackOutCondition");
        }
        inline app::CanBackOutCondition* create() {
            return il2cpp::create_object<app::CanBackOutCondition>(get_class());
        }
    } // namespace CanBackOutCondition
} // namespace app::classes::types
