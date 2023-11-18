#pragma once
#include <Modloader/app/structs/CustomAttributeTypedArgument__Array.h>
#include <Modloader/app/structs/CustomAttributeTypedArgument__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeTypedArgument__Array {
        inline app::CustomAttributeTypedArgument__Array__Class** type_info() {
            static app::CustomAttributeTypedArgument__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CustomAttributeTypedArgument__Array__Class**)(modloader::win::memory::resolve_rva(0x0478FCB8));
            }
            return cache;
        }
        inline app::CustomAttributeTypedArgument__Array__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeTypedArgument__Array__Class>(type_info(), "System.Reflection", "CustomAttributeTypedArgument[]");
        }
        inline app::CustomAttributeTypedArgument__Array* create() {
            return il2cpp::create_object<app::CustomAttributeTypedArgument__Array>(get_class());
        }
    } // namespace CustomAttributeTypedArgument__Array
} // namespace app::classes::types
