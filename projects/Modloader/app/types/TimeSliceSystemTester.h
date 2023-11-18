#pragma once
#include <Modloader/app/structs/TimeSliceSystemTester.h>
#include <Modloader/app/structs/TimeSliceSystemTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSliceSystemTester {
        inline app::TimeSliceSystemTester__Class** type_info() {
            static app::TimeSliceSystemTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeSliceSystemTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeSliceSystemTester__Class* get_class() {
            return il2cpp::get_class<app::TimeSliceSystemTester__Class>(type_info(), "", "TimeSliceSystemTester");
        }
        inline app::TimeSliceSystemTester* create() {
            return il2cpp::create_object<app::TimeSliceSystemTester>(get_class());
        }
    } // namespace TimeSliceSystemTester
} // namespace app::classes::types
