#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeContainerSupportsDeferredConvertListToArray {
        namespace {
            inline app::NativeContainerSupportsDeferredConvertListToArray__Class* type_info_ref = nullptr;
        }
        inline app::NativeContainerSupportsDeferredConvertListToArray__Class** type_info = &type_info_ref;
        inline app::NativeContainerSupportsDeferredConvertListToArray__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerSupportsDeferredConvertListToArray__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsDeferredConvertListToArray");
        }
        inline app::NativeContainerSupportsDeferredConvertListToArray* create() {
            return il2cpp::create_object<app::NativeContainerSupportsDeferredConvertListToArray>(get_class());
        }
    } // namespace NativeContainerSupportsDeferredConvertListToArray
} // namespace app::classes::types
