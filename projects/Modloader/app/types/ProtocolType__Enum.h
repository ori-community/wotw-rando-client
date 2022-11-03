#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProtocolType__Enum {
        namespace {
            inline app::ProtocolType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ProtocolType__Enum__Class** type_info = &type_info_ref;
        inline app::ProtocolType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ProtocolType__Enum__Class>(type_info, "System.Net.Sockets", "ProtocolType");
        }
        inline app::ProtocolType__Enum* create() {
            return il2cpp::create_object<app::ProtocolType__Enum>(get_class());
        }
    } // namespace ProtocolType__Enum
} // namespace app::classes::types
