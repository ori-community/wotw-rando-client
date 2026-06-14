#pragma once
#include <Modloader/app/structs/MessageControllerB.h>
#include <Modloader/app/structs/MessageControllerB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageControllerB {
        inline app::MessageControllerB__Class** type_info() {
            static app::MessageControllerB__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageControllerB__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageControllerB__Class* get_class() {
            return il2cpp::get_class<app::MessageControllerB__Class>(type_info(), "", "MessageControllerB");
        }
        inline app::MessageControllerB* create() {
            return il2cpp::create_object<app::MessageControllerB>(get_class());
        }
    } // namespace MessageControllerB
} // namespace app::classes::types
