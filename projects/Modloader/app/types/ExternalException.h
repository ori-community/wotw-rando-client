#pragma once
#include <Modloader/app/structs/ExternalException.h>
#include <Modloader/app/structs/ExternalException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExternalException {
        inline app::ExternalException__Class** type_info() {
            static app::ExternalException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExternalException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExternalException__Class* get_class() {
            return il2cpp::get_class<app::ExternalException__Class>(type_info(), "System.Runtime.InteropServices", "ExternalException");
        }
        inline app::ExternalException* create() {
            return il2cpp::create_object<app::ExternalException>(get_class());
        }
    } // namespace ExternalException
} // namespace app::classes::types
