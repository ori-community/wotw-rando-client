#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGhostRecorderPlugin__Array {
        namespace {
            app::IGhostRecorderPlugin__Array__Class* type_info_ref = nullptr;
        }
        app::IGhostRecorderPlugin__Array__Class** type_info = &type_info_ref;
        inline app::IGhostRecorderPlugin__Array__Class* get_class() {
            return il2cpp::get_class<app::IGhostRecorderPlugin__Array__Class>(type_info, "", "IGhostRecorderPlugin[]");
        }
        inline app::IGhostRecorderPlugin__Array* create() {
            return il2cpp::create_object<app::IGhostRecorderPlugin__Array>(get_class());
        }
    } // namespace IGhostRecorderPlugin__Array
} // namespace app::classes::types
