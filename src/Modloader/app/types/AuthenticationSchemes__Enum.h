#pragma once
#include <Modloader/app/structs/AuthenticationSchemes__Enum.h>
#include <Modloader/app/structs/AuthenticationSchemes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticationSchemes__Enum {
        inline app::AuthenticationSchemes__Enum__Class** type_info() {
            static app::AuthenticationSchemes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AuthenticationSchemes__Enum__Class**)(modloader::win::memory::resolve_rva(0x04719058));
            }
            return cache;
        }
        inline app::AuthenticationSchemes__Enum__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationSchemes__Enum__Class>(type_info(), "System.Net", "AuthenticationSchemes");
        }
        inline app::AuthenticationSchemes__Enum* create() {
            return il2cpp::create_object<app::AuthenticationSchemes__Enum>(get_class());
        }
    } // namespace AuthenticationSchemes__Enum
} // namespace app::classes::types
