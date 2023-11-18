#pragma once
#include <Modloader/app/structs/ExceptionListener.h>
#include <Modloader/app/structs/ExceptionListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionListener {
        inline app::ExceptionListener__Class** type_info() {
            static app::ExceptionListener__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExceptionListener__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExceptionListener__Class* get_class() {
            return il2cpp::get_class<app::ExceptionListener__Class>(type_info(), "Moon.ExceptionProcessing", "ExceptionListener");
        }
        inline app::ExceptionListener* create() {
            return il2cpp::create_object<app::ExceptionListener>(get_class());
        }
    } // namespace ExceptionListener
} // namespace app::classes::types
