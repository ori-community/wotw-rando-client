#pragma once
#include <Modloader/app/structs/DeallocateOnJobCompletionAttribute.h>
#include <Modloader/app/structs/DeallocateOnJobCompletionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeallocateOnJobCompletionAttribute {
        inline app::DeallocateOnJobCompletionAttribute__Class** type_info() {
            static app::DeallocateOnJobCompletionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeallocateOnJobCompletionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeallocateOnJobCompletionAttribute__Class* get_class() {
            return il2cpp::get_class<app::DeallocateOnJobCompletionAttribute__Class>(type_info(), "Unity.Collections", "DeallocateOnJobCompletionAttribute");
        }
        inline app::DeallocateOnJobCompletionAttribute* create() {
            return il2cpp::create_object<app::DeallocateOnJobCompletionAttribute>(get_class());
        }
    } // namespace DeallocateOnJobCompletionAttribute
} // namespace app::classes::types
