#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeContainerSupportsDeallocateOnJobCompletionAttribute__Class.h>
#include <Modloader/app/structs/NativeContainerSupportsDeallocateOnJobCompletionAttribute.h>

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
