#pragma once
#include <Modloader/app/structs/HandleProcessCorruptedStateExceptionsAttribute.h>
#include <Modloader/app/structs/HandleProcessCorruptedStateExceptionsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HandleProcessCorruptedStateExceptionsAttribute {
        inline app::HandleProcessCorruptedStateExceptionsAttribute__Class** type_info() {
            static app::HandleProcessCorruptedStateExceptionsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HandleProcessCorruptedStateExceptionsAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HandleProcessCorruptedStateExceptionsAttribute__Class* get_class() {
            return il2cpp::get_class<app::HandleProcessCorruptedStateExceptionsAttribute__Class>(type_info(), "System.Runtime.ExceptionServices", "HandleProcessCorruptedStateExceptionsAttribute");
        }
        inline app::HandleProcessCorruptedStateExceptionsAttribute* create() {
            return il2cpp::create_object<app::HandleProcessCorruptedStateExceptionsAttribute>(get_class());
        }
    } // namespace HandleProcessCorruptedStateExceptionsAttribute
} // namespace app::classes::types
