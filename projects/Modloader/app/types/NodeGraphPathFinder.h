#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NodeGraphPathFinder__Class.h>
#include <Modloader/app/structs/NodeGraphPathFinder.h>

namespace app::classes::types {
    namespace NodeGraphPathFinder {
        namespace {
            inline app::NodeGraphPathFinder__Class* type_info_ref = nullptr;
        }
        inline app::NodeGraphPathFinder__Class** type_info = &type_info_ref;
        inline app::NodeGraphPathFinder__Class* get_class() {
            return il2cpp::get_class<app::NodeGraphPathFinder__Class>(type_info, "", "NodeGraphPathFinder");
        }
        inline app::NodeGraphPathFinder* create() {
            return il2cpp::create_object<app::NodeGraphPathFinder>(get_class());
        }
    } // namespace NodeGraphPathFinder
} // namespace app::classes::types
