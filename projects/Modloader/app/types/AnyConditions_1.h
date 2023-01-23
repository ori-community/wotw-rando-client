#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnyConditions_1__Class.h>
#include <Modloader/app/structs/AnyConditions_1.h>

namespace app::classes::types {
    namespace AnyConditions_1 {
        namespace {
            inline app::AnyConditions_1__Class* type_info_ref = nullptr;
        }
        inline app::AnyConditions_1__Class** type_info = &type_info_ref;
        inline app::AnyConditions_1__Class* get_class() {
            return il2cpp::get_class<app::AnyConditions_1__Class>(type_info, "fsm", "AnyConditions");
        }
        inline app::AnyConditions_1* create() {
            return il2cpp::create_object<app::AnyConditions_1>(get_class());
        }
    } // namespace AnyConditions_1
} // namespace app::classes::types
