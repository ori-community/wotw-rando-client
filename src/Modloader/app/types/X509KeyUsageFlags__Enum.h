#pragma once
#include <Modloader/app/structs/X509KeyUsageFlags__Enum.h>
#include <Modloader/app/structs/X509KeyUsageFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509KeyUsageFlags__Enum {
        inline app::X509KeyUsageFlags__Enum__Class** type_info() {
            static app::X509KeyUsageFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509KeyUsageFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472D150));
            }
            return cache;
        }
        inline app::X509KeyUsageFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::X509KeyUsageFlags__Enum__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509KeyUsageFlags");
        }
        inline app::X509KeyUsageFlags__Enum* create() {
            return il2cpp::create_object<app::X509KeyUsageFlags__Enum>(get_class());
        }
    } // namespace X509KeyUsageFlags__Enum
} // namespace app::classes::types
