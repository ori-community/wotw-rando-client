#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Protocol {
        namespace {
            app::Protocol__Class* type_info_ref = nullptr;
        }
        app::Protocol__Class** type_info = &type_info_ref;
        inline app::Protocol__Class* get_class() {
            return il2cpp::get_class<app::Protocol__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Protocol");
        }
        inline app::Protocol* create() {
            return il2cpp::create_object<app::Protocol>(get_class());
        }
        inline app::Protocol__Array* create_array(int size) {
            return il2cpp::array_new<app::Protocol__Array>(get_class(), size);
        }
    } // namespace Protocol
} // namespace app::classes::types
