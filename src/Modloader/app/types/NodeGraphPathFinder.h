#pragma once
#include <Modloader/app/structs/NodeGraphPathFinder.h>
#include <Modloader/app/structs/NodeGraphPathFinder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NodeGraphPathFinder {
        inline app::NodeGraphPathFinder__Class** type_info() {
            static app::NodeGraphPathFinder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NodeGraphPathFinder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NodeGraphPathFinder__Class* get_class() {
            return il2cpp::get_class<app::NodeGraphPathFinder__Class>(type_info(), "", "NodeGraphPathFinder");
        }
        inline app::NodeGraphPathFinder* create() {
            return il2cpp::create_object<app::NodeGraphPathFinder>(get_class());
        }
    } // namespace NodeGraphPathFinder
} // namespace app::classes::types
