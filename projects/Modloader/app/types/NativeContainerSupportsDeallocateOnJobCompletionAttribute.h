#pragma once
#include <Modloader/app/structs/NativeContainerSupportsDeallocateOnJobCompletionAttribute.h>
#include <Modloader/app/structs/NativeContainerSupportsDeallocateOnJobCompletionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeContainerSupportsDeallocateOnJobCompletionAttribute {
        inline app::NativeContainerSupportsDeallocateOnJobCompletionAttribute__Class** type_info() {
            static app::NativeContainerSupportsDeallocateOnJobCompletionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeContainerSupportsDeallocateOnJobCompletionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeContainerSupportsDeallocateOnJobCompletionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerSupportsDeallocateOnJobCompletionAttribute__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsDeallocateOnJobCompletionAttribute");
        }
        inline app::NativeContainerSupportsDeallocateOnJobCompletionAttribute* create() {
            return il2cpp::create_object<app::NativeContainerSupportsDeallocateOnJobCompletionAttribute>(get_class());
        }
    } // namespace NativeContainerSupportsDeallocateOnJobCompletionAttribute
} // namespace app::classes::types
