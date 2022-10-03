#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomerContent__Array {
        namespace {
            app::CustomerContent__Array__Class* type_info_ref = nullptr;
        }
        app::CustomerContent__Array__Class** type_info = &type_info_ref;
        inline app::CustomerContent__Array__Class* get_class() {
            return il2cpp::get_class<app::CustomerContent__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "CustomerContent[]");
        }
        inline app::CustomerContent__Array* create() {
            return il2cpp::create_object<app::CustomerContent__Array>(get_class());
        }
    } // namespace CustomerContent__Array
} // namespace app::classes::types
