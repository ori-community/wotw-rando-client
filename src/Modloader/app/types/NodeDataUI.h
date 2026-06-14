#pragma once
#include <Modloader/app/structs/NodeDataUI.h>
#include <Modloader/app/structs/NodeDataUI__Array.h>
#include <Modloader/app/structs/NodeDataUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NodeDataUI {
        inline app::NodeDataUI__Class** type_info() {
            static app::NodeDataUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NodeDataUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NodeDataUI__Class* get_class() {
            return il2cpp::get_class<app::NodeDataUI__Class>(type_info(), "Moon.BehaviourSystem.BTEditor", "NodeDataUI");
        }
        inline app::NodeDataUI* create() {
            return il2cpp::create_object<app::NodeDataUI>(get_class());
        }
        inline app::NodeDataUI__Array* create_array(int size) {
            return il2cpp::array_new<app::NodeDataUI__Array>(get_class(), size);
        }
        inline app::NodeDataUI__Array* create_array(const std::vector<app::NodeDataUI*>& items) {
            return il2cpp::array_new<app::NodeDataUI__Array>(get_class(), items);
        }
    } // namespace NodeDataUI
} // namespace app::classes::types
