#pragma once
#include <Modloader/app/structs/Data__Array.h>
#include <Modloader/app/structs/Data__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Data__Array {
        inline app::Data__Array__Class** type_info() {
            static app::Data__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Data__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Data__Array__Class* get_class() {
            return il2cpp::get_class<app::Data__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Data[]");
        }
        inline app::Data__Array* create() {
            return il2cpp::create_object<app::Data__Array>(get_class());
        }
    } // namespace Data__Array
} // namespace app::classes::types
