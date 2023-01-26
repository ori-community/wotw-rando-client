#pragma once
#include <Modloader/app/structs/Net__Array.h>
#include <Modloader/app/structs/Net__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Net__Array {
        inline app::Net__Array__Class** type_info() {
            static app::Net__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Net__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Net__Array__Class* get_class() {
            return il2cpp::get_class<app::Net__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Net[]");
        }
        inline app::Net__Array* create() {
            return il2cpp::create_object<app::Net__Array>(get_class());
        }
    } // namespace Net__Array
} // namespace app::classes::types
