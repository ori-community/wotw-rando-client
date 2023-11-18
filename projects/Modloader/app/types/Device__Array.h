#pragma once
#include <Modloader/app/structs/Device__Array.h>
#include <Modloader/app/structs/Device__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Device__Array {
        inline app::Device__Array__Class** type_info() {
            static app::Device__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Device__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Device__Array__Class* get_class() {
            return il2cpp::get_class<app::Device__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Device[]");
        }
        inline app::Device__Array* create() {
            return il2cpp::create_object<app::Device__Array>(get_class());
        }
    } // namespace Device__Array
} // namespace app::classes::types
