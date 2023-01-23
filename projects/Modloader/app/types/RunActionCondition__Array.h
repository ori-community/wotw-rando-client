#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RunActionCondition__Array__Class.h>
#include <Modloader/app/structs/RunActionCondition__Array.h>

namespace app::classes::types {
    namespace RunActionCondition__Array {
        namespace {
            inline app::RunActionCondition__Array__Class* type_info_ref = nullptr;
        }
        inline app::RunActionCondition__Array__Class** type_info = &type_info_ref;
        inline app::RunActionCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::RunActionCondition__Array__Class>(type_info, "", "RunActionCondition[]");
        }
        inline app::RunActionCondition__Array* create() {
            return il2cpp::create_object<app::RunActionCondition__Array>(get_class());
        }
    } // namespace RunActionCondition__Array
} // namespace app::classes::types
