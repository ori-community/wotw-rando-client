#pragma once
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility.h>
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility__Array.h>
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility__Boxed.h>
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UtilitySelectorNode_NodeUtility {
        inline app::UtilitySelectorNode_NodeUtility__Class** type_info() {
            static app::UtilitySelectorNode_NodeUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UtilitySelectorNode_NodeUtility__Class**)(modloader::win::memory::resolve_rva(0x04798BE8));
            }
            return cache;
        }
        inline app::UtilitySelectorNode_NodeUtility__Class* get_class() {
            return il2cpp::get_nested_class<app::UtilitySelectorNode_NodeUtility__Class>(type_info(), "Moon.BehaviourSystem", "UtilitySelectorNode", "NodeUtility");
        }
        inline app::UtilitySelectorNode_NodeUtility* create() {
            return il2cpp::create_object<app::UtilitySelectorNode_NodeUtility>(get_class());
        }
        inline app::UtilitySelectorNode_NodeUtility__Boxed* box(app::UtilitySelectorNode_NodeUtility value) {
            return il2cpp::box_value<app::UtilitySelectorNode_NodeUtility__Boxed>(get_class(), value);
        }
        inline app::UtilitySelectorNode_NodeUtility__Array* create_array(int size) {
            return il2cpp::array_new<app::UtilitySelectorNode_NodeUtility__Array>(get_class(), size);
        }
        inline app::UtilitySelectorNode_NodeUtility__Array* create_array(const std::vector<app::UtilitySelectorNode_NodeUtility>& items) {
            return il2cpp::array_new<app::UtilitySelectorNode_NodeUtility__Array>(get_class(), items);
        }
    } // namespace UtilitySelectorNode_NodeUtility
} // namespace app::classes::types
