#pragma once
#include <Modloader/app/structs/fsObjectProcessor__Array.h>
#include <Modloader/app/structs/fsObjectProcessor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsObjectProcessor__Array {
        inline app::fsObjectProcessor__Array__Class** type_info() {
            static app::fsObjectProcessor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsObjectProcessor__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsObjectProcessor__Array__Class* get_class() {
            return il2cpp::get_class<app::fsObjectProcessor__Array__Class>(type_info(), "FullSerializer", "fsObjectProcessor[]");
        }
        inline app::fsObjectProcessor__Array* create() {
            return il2cpp::create_object<app::fsObjectProcessor__Array>(get_class());
        }
    } // namespace fsObjectProcessor__Array
} // namespace app::classes::types
