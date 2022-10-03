#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Cloud {
        namespace {
            app::Cloud__Class* type_info_ref = nullptr;
        }
        app::Cloud__Class** type_info = &type_info_ref;
        inline app::Cloud__Class* get_class() {
            return il2cpp::get_class<app::Cloud__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Cloud");
        }
        inline app::Cloud* create() {
            return il2cpp::create_object<app::Cloud>(get_class());
        }
        inline app::Cloud__Array* create_array(int size) {
            return il2cpp::array_new<app::Cloud__Array>(get_class(), size);
        }
    } // namespace Cloud
} // namespace app::classes::types
