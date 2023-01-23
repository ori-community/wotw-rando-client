#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FrameData_1__Array__Class.h>
#include <Modloader/app/structs/FrameData_1__Array.h>

namespace app::classes::types {
    namespace FrameData_1__Array {
        namespace {
            inline app::FrameData_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::FrameData_1__Array__Class** type_info = &type_info_ref;
        inline app::FrameData_1__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameData_1__Array__Class>(type_info, "", "FrameData[]");
        }
        inline app::FrameData_1__Array* create() {
            return il2cpp::create_object<app::FrameData_1__Array>(get_class());
        }
    } // namespace FrameData_1__Array
} // namespace app::classes::types
