#pragma once
#include <Modloader/app/structs/Protocol__Array.h>
#include <Modloader/app/structs/Protocol__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Protocol__Array {
        inline app::Protocol__Array__Class** type_info() {
            static app::Protocol__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Protocol__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Protocol__Array__Class* get_class() {
            return il2cpp::get_class<app::Protocol__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Protocol[]");
        }
        inline app::Protocol__Array* create() {
            return il2cpp::create_object<app::Protocol__Array>(get_class());
        }
    } // namespace Protocol__Array
} // namespace app::classes::types
