#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeFixedLengthAttribute__Class.h>
#include <Modloader/app/structs/NativeFixedLengthAttribute.h>

namespace app::classes::types {
    namespace NativeFixedLengthAttribute {
        namespace {
            inline app::NativeFixedLengthAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeFixedLengthAttribute__Class** type_info = &type_info_ref;
        inline app::NativeFixedLengthAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeFixedLengthAttribute__Class>(type_info, "Unity.Collections", "NativeFixedLengthAttribute");
        }
        inline app::NativeFixedLengthAttribute* create() {
            return il2cpp::create_object<app::NativeFixedLengthAttribute>(get_class());
        }
    } // namespace NativeFixedLengthAttribute
} // namespace app::classes::types
