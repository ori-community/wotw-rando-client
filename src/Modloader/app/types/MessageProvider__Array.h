#pragma once
#include <Modloader/app/structs/MessageProvider__Array.h>
#include <Modloader/app/structs/MessageProvider__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageProvider__Array {
        inline app::MessageProvider__Array__Class** type_info() {
            static app::MessageProvider__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageProvider__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::MessageProvider__Array__Class>(type_info(), "", "MessageProvider[]");
        }
        inline app::MessageProvider__Array* create() {
            return il2cpp::create_object<app::MessageProvider__Array>(get_class());
        }
    } // namespace MessageProvider__Array
} // namespace app::classes::types
