#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExceptionListener {
        namespace {
            inline app::ExceptionListener__Class* type_info_ref = nullptr;
        }
        inline app::ExceptionListener__Class** type_info = &type_info_ref;
        inline app::ExceptionListener__Class* get_class() {
            return il2cpp::get_class<app::ExceptionListener__Class>(type_info, "Moon.ExceptionProcessing", "ExceptionListener");
        }
        inline app::ExceptionListener* create() {
            return il2cpp::create_object<app::ExceptionListener>(get_class());
        }
    } // namespace ExceptionListener
} // namespace app::classes::types
