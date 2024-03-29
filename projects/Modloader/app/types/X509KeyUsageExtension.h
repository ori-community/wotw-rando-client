#pragma once
#include <Modloader/app/structs/X509KeyUsageExtension.h>
#include <Modloader/app/structs/X509KeyUsageExtension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509KeyUsageExtension {
        inline app::X509KeyUsageExtension__Class** type_info() {
            static app::X509KeyUsageExtension__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509KeyUsageExtension__Class**)(modloader::win::memory::resolve_rva(0x047543D0));
            }
            return cache;
        }
        inline app::X509KeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::X509KeyUsageExtension__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension");
        }
        inline app::X509KeyUsageExtension* create() {
            return il2cpp::create_object<app::X509KeyUsageExtension>(get_class());
        }
    } // namespace X509KeyUsageExtension
} // namespace app::classes::types
