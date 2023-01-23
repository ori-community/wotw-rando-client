#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetWorldEventCondition__Class.h>
#include <Modloader/app/structs/GetWorldEventCondition.h>

namespace app::classes::types {
    namespace GetWorldEventCondition {
        namespace {
            inline app::GetWorldEventCondition__Class* type_info_ref = nullptr;
        }
        inline app::GetWorldEventCondition__Class** type_info = &type_info_ref;
        inline app::GetWorldEventCondition__Class* get_class() {
            return il2cpp::get_class<app::GetWorldEventCondition__Class>(type_info, "", "GetWorldEventCondition");
        }
        inline app::GetWorldEventCondition* create() {
            return il2cpp::create_object<app::GetWorldEventCondition>(get_class());
        }
    } // namespace GetWorldEventCondition
} // namespace app::classes::types
