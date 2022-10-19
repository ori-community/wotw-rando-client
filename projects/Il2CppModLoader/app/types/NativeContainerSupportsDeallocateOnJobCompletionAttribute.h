#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeContainerSupportsDeallocateOnJobCompletionAttribute {
        namespace {
            inline app::NativeContainerSupportsDeallocateOnJobCompletionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeContainerSupportsDeallocateOnJobCompletionAttribute__Class** type_info = &type_info_ref;
        inline app::NativeContainerSupportsDeallocateOnJobCompletionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerSupportsDeallocateOnJobCompletionAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsDeallocateOnJobCompletionAttribute");
        }
        inline app::NativeContainerSupportsDeallocateOnJobCompletionAttribute* create() {
            return il2cpp::create_object<app::NativeContainerSupportsDeallocateOnJobCompletionAttribute>(get_class());
        }
    } // namespace NativeContainerSupportsDeallocateOnJobCompletionAttribute
} // namespace app::classes::types
