#pragma once
#include <Modloader/app/structs/JUnitReporter_TestCase.h>
#include <Modloader/app/structs/JUnitReporter_TestCase__Array.h>
#include <Modloader/app/structs/JUnitReporter_TestCase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JUnitReporter_TestCase {
        inline app::JUnitReporter_TestCase__Class** type_info() {
            static app::JUnitReporter_TestCase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JUnitReporter_TestCase__Class**)(modloader::win::memory::resolve_rva(0x04757D58));
            }
            return cache;
        }
        inline app::JUnitReporter_TestCase__Class* get_class() {
            return il2cpp::get_nested_class<app::JUnitReporter_TestCase__Class>(type_info(), "", "JUnitReporter", "TestCase");
        }
        inline app::JUnitReporter_TestCase* create() {
            return il2cpp::create_object<app::JUnitReporter_TestCase>(get_class());
        }
        inline app::JUnitReporter_TestCase__Array* create_array(int size) {
            return il2cpp::array_new<app::JUnitReporter_TestCase__Array>(get_class(), size);
        }
        inline app::JUnitReporter_TestCase__Array* create_array(const std::vector<app::JUnitReporter_TestCase*>& items) {
            return il2cpp::array_new<app::JUnitReporter_TestCase__Array>(get_class(), items);
        }
    } // namespace JUnitReporter_TestCase
} // namespace app::classes::types
