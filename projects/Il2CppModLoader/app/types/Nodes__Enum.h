#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Nodes__Enum {
        namespace {
            app::Nodes__Enum__Class* type_info_ref = nullptr;
        }
        app::Nodes__Enum__Class** type_info = &type_info_ref;
        inline app::Nodes__Enum__Class* get_class() {
            return il2cpp::get_class<app::Nodes__Enum__Class>(type_info, "System.Data", "Nodes");
        }
        inline app::Nodes__Enum* create() {
            return il2cpp::create_object<app::Nodes__Enum>(get_class());
        }
    } // namespace Nodes__Enum
} // namespace app::classes::types
