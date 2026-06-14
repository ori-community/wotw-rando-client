#pragma once
#include <Modloader/app/structs/ExceptionEntry__Array.h>
#include <Modloader/app/structs/ExceptionEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionEntry__Array {
        inline app::ExceptionEntry__Array__Class** type_info() {
            static app::ExceptionEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExceptionEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExceptionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::ExceptionEntry__Array__Class>(type_info(), "Moon.ExceptionProcessing", "ExceptionEntry[]");
        }
        inline app::ExceptionEntry__Array* create() {
            return il2cpp::create_object<app::ExceptionEntry__Array>(get_class());
        }
    } // namespace ExceptionEntry__Array
} // namespace app::classes::types
