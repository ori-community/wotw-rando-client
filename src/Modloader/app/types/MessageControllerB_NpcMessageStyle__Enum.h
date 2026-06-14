#pragma once
#include <Modloader/app/structs/MessageControllerB_NpcMessageStyle__Enum.h>
#include <Modloader/app/structs/MessageControllerB_NpcMessageStyle__Enum__Array.h>
#include <Modloader/app/structs/MessageControllerB_NpcMessageStyle__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageControllerB_NpcMessageStyle__Enum {
        inline app::MessageControllerB_NpcMessageStyle__Enum__Class** type_info() {
            static app::MessageControllerB_NpcMessageStyle__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageControllerB_NpcMessageStyle__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageControllerB_NpcMessageStyle__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MessageControllerB_NpcMessageStyle__Enum__Class>(type_info(), "", "MessageControllerB", "NpcMessageStyle");
        }
        inline app::MessageControllerB_NpcMessageStyle__Enum* create() {
            return il2cpp::create_object<app::MessageControllerB_NpcMessageStyle__Enum>(get_class());
        }
        inline app::MessageControllerB_NpcMessageStyle__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MessageControllerB_NpcMessageStyle__Enum__Array>(get_class(), size);
        }
        inline app::MessageControllerB_NpcMessageStyle__Enum__Array* create_array(const std::vector<app::MessageControllerB_NpcMessageStyle__Enum*>& items) {
            return il2cpp::array_new<app::MessageControllerB_NpcMessageStyle__Enum__Array>(get_class(), items);
        }
    } // namespace MessageControllerB_NpcMessageStyle__Enum
} // namespace app::classes::types
