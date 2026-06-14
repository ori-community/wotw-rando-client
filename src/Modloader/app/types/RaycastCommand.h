#pragma once
#include <Modloader/app/structs/RaycastCommand.h>
#include <Modloader/app/structs/RaycastCommand__Array.h>
#include <Modloader/app/structs/RaycastCommand__Boxed.h>
#include <Modloader/app/structs/RaycastCommand__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaycastCommand {
        inline app::RaycastCommand__Class** type_info() {
            static app::RaycastCommand__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaycastCommand__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaycastCommand__Class* get_class() {
            return il2cpp::get_class<app::RaycastCommand__Class>(type_info(), "UnityEngine", "RaycastCommand");
        }
        inline app::RaycastCommand* create() {
            return il2cpp::create_object<app::RaycastCommand>(get_class());
        }
        inline app::RaycastCommand__Boxed* box(app::RaycastCommand value) {
            return il2cpp::box_value<app::RaycastCommand__Boxed>(get_class(), value);
        }
        inline app::RaycastCommand__Array* create_array(int size) {
            return il2cpp::array_new<app::RaycastCommand__Array>(get_class(), size);
        }
        inline app::RaycastCommand__Array* create_array(const std::vector<app::RaycastCommand>& items) {
            return il2cpp::array_new<app::RaycastCommand__Array>(get_class(), items);
        }
    } // namespace RaycastCommand
} // namespace app::classes::types
