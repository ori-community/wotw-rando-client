#pragma once
#include <Modloader/app/structs/fsMetaType__Array.h>
#include <Modloader/app/structs/fsMetaType__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsMetaType__Array {
        inline app::fsMetaType__Array__Class** type_info() {
            static app::fsMetaType__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsMetaType__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsMetaType__Array__Class* get_class() {
            return il2cpp::get_class<app::fsMetaType__Array__Class>(type_info(), "FullSerializer", "fsMetaType[]");
        }
        inline app::fsMetaType__Array* create() {
            return il2cpp::create_object<app::fsMetaType__Array>(get_class());
        }
    } // namespace fsMetaType__Array
} // namespace app::classes::types
