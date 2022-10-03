#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeContainerIsAtomicWriteOnlyAttribute {
        namespace {
            app::NativeContainerIsAtomicWriteOnlyAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeContainerIsAtomicWriteOnlyAttribute__Class** type_info = &type_info_ref;
        inline app::NativeContainerIsAtomicWriteOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerIsAtomicWriteOnlyAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeContainerIsAtomicWriteOnlyAttribute");
        }
        inline app::NativeContainerIsAtomicWriteOnlyAttribute* create() {
            return il2cpp::create_object<app::NativeContainerIsAtomicWriteOnlyAttribute>(get_class());
        }
    } // namespace NativeContainerIsAtomicWriteOnlyAttribute
} // namespace app::classes::types
