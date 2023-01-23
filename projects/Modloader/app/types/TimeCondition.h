#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeCondition__Class.h>
#include <Modloader/app/structs/TimeCondition.h>

namespace app::classes::types {
    namespace TimeCondition {
        namespace {
            inline app::TimeCondition__Class* type_info_ref = nullptr;
        }
        inline app::TimeCondition__Class** type_info = &type_info_ref;
        inline app::TimeCondition__Class* get_class() {
            return il2cpp::get_class<app::TimeCondition__Class>(type_info, "", "TimeCondition");
        }
        inline app::TimeCondition* create() {
            return il2cpp::create_object<app::TimeCondition>(get_class());
        }
    } // namespace TimeCondition
} // namespace app::classes::types
