#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Net {
        namespace {
            app::Net__Class* type_info_ref = nullptr;
        }
        app::Net__Class** type_info = &type_info_ref;
        inline app::Net__Class* get_class() {
            return il2cpp::get_class<app::Net__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Net");
        }
        inline app::Net* create() {
            return il2cpp::create_object<app::Net>(get_class());
        }
        inline app::Net__Array* create_array(int size) {
            return il2cpp::array_new<app::Net__Array>(get_class(), size);
        }
    } // namespace Net
} // namespace app::classes::types
