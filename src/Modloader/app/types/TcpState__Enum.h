#pragma once
#include <Modloader/app/structs/TcpState__Enum.h>
#include <Modloader/app/structs/TcpState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TcpState__Enum {
        inline app::TcpState__Enum__Class** type_info() {
            static app::TcpState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TcpState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TcpState__Enum__Class* get_class() {
            return il2cpp::get_class<app::TcpState__Enum__Class>(type_info(), "System.Net.NetworkInformation", "TcpState");
        }
        inline app::TcpState__Enum* create() {
            return il2cpp::create_object<app::TcpState__Enum>(get_class());
        }
    } // namespace TcpState__Enum
} // namespace app::classes::types
