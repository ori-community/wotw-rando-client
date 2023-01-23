#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Number_NumberBuffer__Class.h>
#include <Modloader/app/structs/Number_NumberBuffer.h>
#include <Modloader/app/structs/Number_NumberBuffer__Boxed.h>

namespace app::classes::types {
    namespace Number_NumberBuffer {
        inline app::Number_NumberBuffer__Class** type_info = (app::Number_NumberBuffer__Class**)(modloader::win::memory::resolve_rva(0x04746EA8));
        inline app::Number_NumberBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::Number_NumberBuffer__Class>(type_info, "System", "Number", "NumberBuffer");
        }
        inline app::Number_NumberBuffer* create() {
            return il2cpp::create_object<app::Number_NumberBuffer>(get_class());
        }
        inline app::Number_NumberBuffer__Boxed* box(app::Number_NumberBuffer value) {
            return il2cpp::box_value<app::Number_NumberBuffer__Boxed>(get_class(), value);
        }
    } // namespace Number_NumberBuffer
} // namespace app::classes::types
