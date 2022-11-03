#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SocketElement {
        namespace {
            inline app::SocketElement__Class* type_info_ref = nullptr;
        }
        inline app::SocketElement__Class** type_info = &type_info_ref;
        inline app::SocketElement__Class* get_class() {
            return il2cpp::get_class<app::SocketElement__Class>(type_info, "System.Net.Configuration", "SocketElement");
        }
        inline app::SocketElement* create() {
            return il2cpp::create_object<app::SocketElement>(get_class());
        }
    } // namespace SocketElement
} // namespace app::classes::types
