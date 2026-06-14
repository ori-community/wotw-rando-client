#pragma once
#include <Modloader/app/structs/NativeContainerSupportsDeferredConvertListToArray.h>
#include <Modloader/app/structs/NativeContainerSupportsDeferredConvertListToArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeContainerSupportsDeferredConvertListToArray {
        inline app::NativeContainerSupportsDeferredConvertListToArray__Class** type_info() {
            static app::NativeContainerSupportsDeferredConvertListToArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeContainerSupportsDeferredConvertListToArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeContainerSupportsDeferredConvertListToArray__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerSupportsDeferredConvertListToArray__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsDeferredConvertListToArray");
        }
        inline app::NativeContainerSupportsDeferredConvertListToArray* create() {
            return il2cpp::create_object<app::NativeContainerSupportsDeferredConvertListToArray>(get_class());
        }
    } // namespace NativeContainerSupportsDeferredConvertListToArray
} // namespace app::classes::types
