#pragma once
#include <Modloader/app/structs/NativeContainerIsAtomicWriteOnlyAttribute.h>
#include <Modloader/app/structs/NativeContainerIsAtomicWriteOnlyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeContainerIsAtomicWriteOnlyAttribute {
        inline app::NativeContainerIsAtomicWriteOnlyAttribute__Class** type_info() {
            static app::NativeContainerIsAtomicWriteOnlyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeContainerIsAtomicWriteOnlyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeContainerIsAtomicWriteOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerIsAtomicWriteOnlyAttribute__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "NativeContainerIsAtomicWriteOnlyAttribute");
        }
        inline app::NativeContainerIsAtomicWriteOnlyAttribute* create() {
            return il2cpp::create_object<app::NativeContainerIsAtomicWriteOnlyAttribute>(get_class());
        }
    } // namespace NativeContainerIsAtomicWriteOnlyAttribute
} // namespace app::classes::types
