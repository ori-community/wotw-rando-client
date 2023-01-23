#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FormatProvider_Number_NumberBuffer__Class.h>
#include <Modloader/app/structs/FormatProvider_Number_NumberBuffer.h>
#include <Modloader/app/structs/FormatProvider_Number_NumberBuffer__Boxed.h>

namespace app::classes::types {
    namespace FormatProvider_Number_NumberBuffer {
        namespace {
            inline app::FormatProvider_Number_NumberBuffer__Class* type_info_ref = nullptr;
        }
        inline app::FormatProvider_Number_NumberBuffer__Class** type_info = &type_info_ref;
        inline app::FormatProvider_Number_NumberBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::FormatProvider_Number_NumberBuffer__Class>(type_info, "System.Globalization", "FormatProvider+Number", "NumberBuffer");
        }
        inline app::FormatProvider_Number_NumberBuffer* create() {
            return il2cpp::create_object<app::FormatProvider_Number_NumberBuffer>(get_class());
        }
        inline app::FormatProvider_Number_NumberBuffer__Boxed* box(app::FormatProvider_Number_NumberBuffer value) {
            return il2cpp::box_value<app::FormatProvider_Number_NumberBuffer__Boxed>(get_class(), value);
        }
    } // namespace FormatProvider_Number_NumberBuffer
} // namespace app::classes::types
