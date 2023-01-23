#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FPSTestResult__Array__Class.h>
#include <Modloader/app/structs/FPSTestResult__Array.h>

namespace app::classes::types {
    namespace FPSTestResult__Array {
        namespace {
            inline app::FPSTestResult__Array__Class* type_info_ref = nullptr;
        }
        inline app::FPSTestResult__Array__Class** type_info = &type_info_ref;
        inline app::FPSTestResult__Array__Class* get_class() {
            return il2cpp::get_class<app::FPSTestResult__Array__Class>(type_info, "", "FPSTestResult[]");
        }
        inline app::FPSTestResult__Array* create() {
            return il2cpp::create_object<app::FPSTestResult__Array>(get_class());
        }
    } // namespace FPSTestResult__Array
} // namespace app::classes::types
