#pragma once
#include <Modloader/app/structs/Sdk__Array.h>
#include <Modloader/app/structs/Sdk__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Sdk__Array {
        inline app::Sdk__Array__Class** type_info() {
            static app::Sdk__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Sdk__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Sdk__Array__Class* get_class() {
            return il2cpp::get_class<app::Sdk__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Sdk[]");
        }
        inline app::Sdk__Array* create() {
            return il2cpp::create_object<app::Sdk__Array>(get_class());
        }
    } // namespace Sdk__Array
} // namespace app::classes::types
