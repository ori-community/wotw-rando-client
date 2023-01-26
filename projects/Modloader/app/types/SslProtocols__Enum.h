#pragma once
#include <Modloader/app/structs/SslProtocols__Enum.h>
#include <Modloader/app/structs/SslProtocols__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SslProtocols__Enum {
        inline app::SslProtocols__Enum__Class** type_info() {
            static app::SslProtocols__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SslProtocols__Enum__Class**)(modloader::win::memory::resolve_rva(0x04750418));
            }
            return cache;
        }
        inline app::SslProtocols__Enum__Class* get_class() {
            return il2cpp::get_class<app::SslProtocols__Enum__Class>(type_info(), "System.Security.Authentication", "SslProtocols");
        }
        inline app::SslProtocols__Enum* create() {
            return il2cpp::create_object<app::SslProtocols__Enum>(get_class());
        }
    } // namespace SslProtocols__Enum
} // namespace app::classes::types
