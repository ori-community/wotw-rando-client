#pragma once
#include <Modloader/app/structs/App__Array.h>
#include <Modloader/app/structs/App__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace App__Array {
        inline app::App__Array__Class** type_info() {
            static app::App__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::App__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::App__Array__Class* get_class() {
            return il2cpp::get_class<app::App__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "App[]");
        }
        inline app::App__Array* create() {
            return il2cpp::create_object<app::App__Array>(get_class());
        }
    } // namespace App__Array
} // namespace app::classes::types
