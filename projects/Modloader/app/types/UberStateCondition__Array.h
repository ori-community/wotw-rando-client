#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateCondition__Array__Class.h>
#include <Modloader/app/structs/UberStateCondition__Array.h>

namespace app::classes::types {
    namespace UberStateCondition__Array {
        namespace {
            inline app::UberStateCondition__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberStateCondition__Array__Class** type_info = &type_info_ref;
        inline app::UberStateCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateCondition__Array__Class>(type_info, "", "UberStateCondition[]");
        }
        inline app::UberStateCondition__Array* create() {
            return il2cpp::create_object<app::UberStateCondition__Array>(get_class());
        }
    } // namespace UberStateCondition__Array
} // namespace app::classes::types
