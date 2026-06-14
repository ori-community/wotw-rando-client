#pragma once
#include <Modloader/app/structs/SkeetoPlaceholder__Array.h>
#include <Modloader/app/structs/SkeetoPlaceholder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoPlaceholder__Array {
        inline app::SkeetoPlaceholder__Array__Class** type_info() {
            static app::SkeetoPlaceholder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoPlaceholder__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::SkeetoPlaceholder__Array__Class>(type_info(), "", "SkeetoPlaceholder[]");
        }
        inline app::SkeetoPlaceholder__Array* create() {
            return il2cpp::create_object<app::SkeetoPlaceholder__Array>(get_class());
        }
    } // namespace SkeetoPlaceholder__Array
} // namespace app::classes::types
