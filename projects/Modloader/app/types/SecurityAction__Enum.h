#pragma once
#include <Modloader/app/structs/SecurityAction__Enum.h>
#include <Modloader/app/structs/SecurityAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityAction__Enum {
        inline app::SecurityAction__Enum__Class** type_info() {
            static app::SecurityAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecurityAction__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473BAC8));
            }
            return cache;
        }
        inline app::SecurityAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityAction__Enum__Class>(type_info(), "System.Security.Permissions", "SecurityAction");
        }
        inline app::SecurityAction__Enum* create() {
            return il2cpp::create_object<app::SecurityAction__Enum>(get_class());
        }
    } // namespace SecurityAction__Enum
} // namespace app::classes::types
