#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DrivableExecutionOrder__Enum {
        namespace {
            inline app::DrivableExecutionOrder__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DrivableExecutionOrder__Enum__Class** type_info = &type_info_ref;
        inline app::DrivableExecutionOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::DrivableExecutionOrder__Enum__Class>(type_info, "Moon", "DrivableExecutionOrder");
        }
        inline app::DrivableExecutionOrder__Enum* create() {
            return il2cpp::create_object<app::DrivableExecutionOrder__Enum>(get_class());
        }
    } // namespace DrivableExecutionOrder__Enum
} // namespace app::classes::types
