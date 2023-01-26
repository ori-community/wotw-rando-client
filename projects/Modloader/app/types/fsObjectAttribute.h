#pragma once
#include <Modloader/app/structs/fsObjectAttribute.h>
#include <Modloader/app/structs/fsObjectAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsObjectAttribute {
        inline app::fsObjectAttribute__Class** type_info() {
            static app::fsObjectAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsObjectAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsObjectAttribute__Class* get_class() {
            return il2cpp::get_class<app::fsObjectAttribute__Class>(type_info(), "FullSerializer", "fsObjectAttribute");
        }
        inline app::fsObjectAttribute* create() {
            return il2cpp::create_object<app::fsObjectAttribute>(get_class());
        }
    } // namespace fsObjectAttribute
} // namespace app::classes::types
