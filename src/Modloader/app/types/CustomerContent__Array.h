#pragma once
#include <Modloader/app/structs/CustomerContent__Array.h>
#include <Modloader/app/structs/CustomerContent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomerContent__Array {
        inline app::CustomerContent__Array__Class** type_info() {
            static app::CustomerContent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomerContent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomerContent__Array__Class* get_class() {
            return il2cpp::get_class<app::CustomerContent__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "CustomerContent[]");
        }
        inline app::CustomerContent__Array* create() {
            return il2cpp::create_object<app::CustomerContent__Array>(get_class());
        }
    } // namespace CustomerContent__Array
} // namespace app::classes::types
