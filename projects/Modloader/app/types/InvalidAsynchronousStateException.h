#pragma once
#include <Modloader/app/structs/InvalidAsynchronousStateException.h>
#include <Modloader/app/structs/InvalidAsynchronousStateException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvalidAsynchronousStateException {
        inline app::InvalidAsynchronousStateException__Class** type_info() {
            static app::InvalidAsynchronousStateException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InvalidAsynchronousStateException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InvalidAsynchronousStateException__Class* get_class() {
            return il2cpp::get_class<app::InvalidAsynchronousStateException__Class>(type_info(), "System.ComponentModel", "InvalidAsynchronousStateException");
        }
        inline app::InvalidAsynchronousStateException* create() {
            return il2cpp::create_object<app::InvalidAsynchronousStateException>(get_class());
        }
    } // namespace InvalidAsynchronousStateException
} // namespace app::classes::types
