#pragma once
#include <Modloader/app/structs/CapsulecastCommand.h>
#include <Modloader/app/structs/CapsulecastCommand__Array.h>
#include <Modloader/app/structs/CapsulecastCommand__Boxed.h>
#include <Modloader/app/structs/CapsulecastCommand__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CapsulecastCommand {
        inline app::CapsulecastCommand__Class** type_info() {
            static app::CapsulecastCommand__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CapsulecastCommand__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CapsulecastCommand__Class* get_class() {
            return il2cpp::get_class<app::CapsulecastCommand__Class>(type_info(), "UnityEngine", "CapsulecastCommand");
        }
        inline app::CapsulecastCommand* create() {
            return il2cpp::create_object<app::CapsulecastCommand>(get_class());
        }
        inline app::CapsulecastCommand__Boxed* box(app::CapsulecastCommand value) {
            return il2cpp::box_value<app::CapsulecastCommand__Boxed>(get_class(), value);
        }
        inline app::CapsulecastCommand__Array* create_array(int size) {
            return il2cpp::array_new<app::CapsulecastCommand__Array>(get_class(), size);
        }
        inline app::CapsulecastCommand__Array* create_array(const std::vector<app::CapsulecastCommand>& items) {
            return il2cpp::array_new<app::CapsulecastCommand__Array>(get_class(), items);
        }
    } // namespace CapsulecastCommand
} // namespace app::classes::types
