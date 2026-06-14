#pragma once
#include <Modloader/app/structs/Attributes__Array.h>
#include <Modloader/app/structs/Attributes__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Attributes__Array {
        inline app::Attributes__Array__Class** type_info() {
            static app::Attributes__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Attributes__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Attributes__Array__Class* get_class() {
            return il2cpp::get_class<app::Attributes__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Attributes[]");
        }
        inline app::Attributes__Array* create() {
            return il2cpp::create_object<app::Attributes__Array>(get_class());
        }
    } // namespace Attributes__Array
} // namespace app::classes::types
