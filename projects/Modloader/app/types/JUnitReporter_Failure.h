#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JUnitReporter_Failure {
        inline app::JUnitReporter_Failure__Class** type_info = (app::JUnitReporter_Failure__Class**)(modloader::win::memory::resolve_rva(0x04745C90));
        inline app::JUnitReporter_Failure__Class* get_class() {
            return il2cpp::get_nested_class<app::JUnitReporter_Failure__Class>(type_info, "", "JUnitReporter", "Failure");
        }
        inline app::JUnitReporter_Failure* create() {
            return il2cpp::create_object<app::JUnitReporter_Failure>(get_class());
        }
        inline app::JUnitReporter_Failure__Array* create_array(int size) {
            return il2cpp::array_new<app::JUnitReporter_Failure__Array>(get_class(), size);
        }
        inline app::JUnitReporter_Failure__Array* create_array(const std::vector<app::JUnitReporter_Failure*>& items) {
            return il2cpp::array_new<app::JUnitReporter_Failure__Array>(get_class(), items);
        }
    } // namespace JUnitReporter_Failure
} // namespace app::classes::types
