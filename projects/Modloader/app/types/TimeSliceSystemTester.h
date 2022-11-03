#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSliceSystemTester {
        namespace {
            inline app::TimeSliceSystemTester__Class* type_info_ref = nullptr;
        }
        inline app::TimeSliceSystemTester__Class** type_info = &type_info_ref;
        inline app::TimeSliceSystemTester__Class* get_class() {
            return il2cpp::get_class<app::TimeSliceSystemTester__Class>(type_info, "", "TimeSliceSystemTester");
        }
        inline app::TimeSliceSystemTester* create() {
            return il2cpp::create_object<app::TimeSliceSystemTester>(get_class());
        }
    } // namespace TimeSliceSystemTester
} // namespace app::classes::types
