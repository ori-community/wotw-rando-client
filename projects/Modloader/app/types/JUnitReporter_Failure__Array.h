#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JUnitReporter_Failure__Array {
        namespace {
            inline app::JUnitReporter_Failure__Array__Class* type_info_ref = nullptr;
        }
        inline app::JUnitReporter_Failure__Array__Class** type_info = &type_info_ref;
        inline app::JUnitReporter_Failure__Array__Class* get_class() {
            return il2cpp::get_class<app::JUnitReporter_Failure__Array__Class>(type_info, "", "JUnitReporter+Failure[]");
        }
        inline app::JUnitReporter_Failure__Array* create() {
            return il2cpp::create_object<app::JUnitReporter_Failure__Array>(get_class());
        }
    } // namespace JUnitReporter_Failure__Array
} // namespace app::classes::types
