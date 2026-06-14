#pragma once
#include <Modloader/app/structs/fsMetaProperty__Array.h>
#include <Modloader/app/structs/fsMetaProperty__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsMetaProperty__Array {
        inline app::fsMetaProperty__Array__Class** type_info() {
            static app::fsMetaProperty__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsMetaProperty__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsMetaProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::fsMetaProperty__Array__Class>(type_info(), "FullSerializer.Internal", "fsMetaProperty[]");
        }
        inline app::fsMetaProperty__Array* create() {
            return il2cpp::create_object<app::fsMetaProperty__Array>(get_class());
        }
    } // namespace fsMetaProperty__Array
} // namespace app::classes::types
