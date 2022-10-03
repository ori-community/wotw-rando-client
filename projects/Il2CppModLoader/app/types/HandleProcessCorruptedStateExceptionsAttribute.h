#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HandleProcessCorruptedStateExceptionsAttribute {
        namespace {
            app::HandleProcessCorruptedStateExceptionsAttribute__Class* type_info_ref = nullptr;
        }
        app::HandleProcessCorruptedStateExceptionsAttribute__Class** type_info = &type_info_ref;
        inline app::HandleProcessCorruptedStateExceptionsAttribute__Class* get_class() {
            return il2cpp::get_class<app::HandleProcessCorruptedStateExceptionsAttribute__Class>(type_info, "System.Runtime.ExceptionServices", "HandleProcessCorruptedStateExceptionsAttribute");
        }
        inline app::HandleProcessCorruptedStateExceptionsAttribute* create() {
            return il2cpp::create_object<app::HandleProcessCorruptedStateExceptionsAttribute>(get_class());
        }
    } // namespace HandleProcessCorruptedStateExceptionsAttribute
} // namespace app::classes::types
