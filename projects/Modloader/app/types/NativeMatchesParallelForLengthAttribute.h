#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeMatchesParallelForLengthAttribute__Class.h>
#include <Modloader/app/structs/NativeMatchesParallelForLengthAttribute.h>

namespace app::classes::types {
    namespace NativeMatchesParallelForLengthAttribute {
        namespace {
            inline app::NativeMatchesParallelForLengthAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeMatchesParallelForLengthAttribute__Class** type_info = &type_info_ref;
        inline app::NativeMatchesParallelForLengthAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeMatchesParallelForLengthAttribute__Class>(type_info, "Unity.Collections", "NativeMatchesParallelForLengthAttribute");
        }
        inline app::NativeMatchesParallelForLengthAttribute* create() {
            return il2cpp::create_object<app::NativeMatchesParallelForLengthAttribute>(get_class());
        }
    } // namespace NativeMatchesParallelForLengthAttribute
} // namespace app::classes::types
