#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGhostRecorderPlugin {
        namespace {
            app::IGhostRecorderPlugin__Class* type_info_ref = nullptr;
        }
        app::IGhostRecorderPlugin__Class** type_info = &type_info_ref;
        inline app::IGhostRecorderPlugin__Class* get_class() {
            return il2cpp::get_class<app::IGhostRecorderPlugin__Class>(type_info, "", "IGhostRecorderPlugin");
        }
        inline app::IGhostRecorderPlugin* create() {
            return il2cpp::create_object<app::IGhostRecorderPlugin>(get_class());
        }
        inline app::IGhostRecorderPlugin__Array* create_array(int size) {
            return il2cpp::array_new<app::IGhostRecorderPlugin__Array>(get_class(), size);
        }
    } // namespace IGhostRecorderPlugin
} // namespace app::classes::types
