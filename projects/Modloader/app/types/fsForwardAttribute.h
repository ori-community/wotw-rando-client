#pragma once
#include <Modloader/app/structs/fsForwardAttribute.h>
#include <Modloader/app/structs/fsForwardAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsForwardAttribute {
        inline app::fsForwardAttribute__Class** type_info() {
            static app::fsForwardAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsForwardAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsForwardAttribute__Class* get_class() {
            return il2cpp::get_class<app::fsForwardAttribute__Class>(type_info(), "FullSerializer", "fsForwardAttribute");
        }
        inline app::fsForwardAttribute* create() {
            return il2cpp::create_object<app::fsForwardAttribute>(get_class());
        }
    } // namespace fsForwardAttribute
} // namespace app::classes::types
