#pragma once
#include <Modloader/app/structs/ExceptionResource__Enum.h>
#include <Modloader/app/structs/ExceptionResource__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionResource__Enum {
        inline app::ExceptionResource__Enum__Class** type_info() {
            static app::ExceptionResource__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExceptionResource__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExceptionResource__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExceptionResource__Enum__Class>(type_info(), "System", "ExceptionResource");
        }
        inline app::ExceptionResource__Enum* create() {
            return il2cpp::create_object<app::ExceptionResource__Enum>(get_class());
        }
    } // namespace ExceptionResource__Enum
} // namespace app::classes::types
