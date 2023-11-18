#pragma once
#include <Modloader/app/structs/NativeMatchesParallelForLengthAttribute.h>
#include <Modloader/app/structs/NativeMatchesParallelForLengthAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeMatchesParallelForLengthAttribute {
        inline app::NativeMatchesParallelForLengthAttribute__Class** type_info() {
            static app::NativeMatchesParallelForLengthAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeMatchesParallelForLengthAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeMatchesParallelForLengthAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeMatchesParallelForLengthAttribute__Class>(type_info(), "Unity.Collections", "NativeMatchesParallelForLengthAttribute");
        }
        inline app::NativeMatchesParallelForLengthAttribute* create() {
            return il2cpp::create_object<app::NativeMatchesParallelForLengthAttribute>(get_class());
        }
    } // namespace NativeMatchesParallelForLengthAttribute
} // namespace app::classes::types
