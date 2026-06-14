#pragma once
#include <Modloader/app/structs/MarshalDirectiveException.h>
#include <Modloader/app/structs/MarshalDirectiveException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MarshalDirectiveException {
        inline app::MarshalDirectiveException__Class** type_info() {
            static app::MarshalDirectiveException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MarshalDirectiveException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MarshalDirectiveException__Class* get_class() {
            return il2cpp::get_class<app::MarshalDirectiveException__Class>(type_info(), "System.Runtime.InteropServices", "MarshalDirectiveException");
        }
        inline app::MarshalDirectiveException* create() {
            return il2cpp::create_object<app::MarshalDirectiveException>(get_class());
        }
    } // namespace MarshalDirectiveException
} // namespace app::classes::types
