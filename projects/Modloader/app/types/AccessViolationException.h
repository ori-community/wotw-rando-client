#pragma once
#include <Modloader/app/structs/AccessViolationException.h>
#include <Modloader/app/structs/AccessViolationException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AccessViolationException {
        inline app::AccessViolationException__Class** type_info() {
            static app::AccessViolationException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AccessViolationException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AccessViolationException__Class* get_class() {
            return il2cpp::get_class<app::AccessViolationException__Class>(type_info(), "System", "AccessViolationException");
        }
        inline app::AccessViolationException* create() {
            return il2cpp::create_object<app::AccessViolationException>(get_class());
        }
    } // namespace AccessViolationException
} // namespace app::classes::types
