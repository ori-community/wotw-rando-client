#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Action_1__Class.h>
#include <Modloader/app/structs/Action_1.h>
#include <Modloader/app/structs/Action_1__Array.h>

namespace app::classes::types {
    namespace Action_1 {
        namespace {
            inline app::Action_1__Class* type_info_ref = nullptr;
        }
        inline app::Action_1__Class** type_info = &type_info_ref;
        inline app::Action_1__Class* get_class() {
            return il2cpp::get_class<app::Action_1__Class>(type_info, "Moon.BehaviourSystem", "Action");
        }
        inline app::Action_1* create() {
            return il2cpp::create_object<app::Action_1>(get_class());
        }
        inline app::Action_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Action_1__Array>(get_class(), size);
        }
        inline app::Action_1__Array* create_array(const std::vector<app::Action_1*>& items) {
            return il2cpp::array_new<app::Action_1__Array>(get_class(), items);
        }
    } // namespace Action_1
} // namespace app::classes::types
