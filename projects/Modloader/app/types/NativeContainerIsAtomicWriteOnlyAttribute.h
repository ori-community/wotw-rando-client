#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeContainerIsAtomicWriteOnlyAttribute {
        namespace {
            inline app::NativeContainerIsAtomicWriteOnlyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeContainerIsAtomicWriteOnlyAttribute__Class** type_info = &type_info_ref;
        inline app::NativeContainerIsAtomicWriteOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerIsAtomicWriteOnlyAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeContainerIsAtomicWriteOnlyAttribute");
        }
        inline app::NativeContainerIsAtomicWriteOnlyAttribute* create() {
            return il2cpp::create_object<app::NativeContainerIsAtomicWriteOnlyAttribute>(get_class());
        }
    } // namespace NativeContainerIsAtomicWriteOnlyAttribute
} // namespace app::classes::types
