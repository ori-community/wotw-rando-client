#pragma once
#include <Modloader/app/structs/ExtendedKeyUsageExtension.h>
#include <Modloader/app/structs/ExtendedKeyUsageExtension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtendedKeyUsageExtension {
        inline app::ExtendedKeyUsageExtension__Class** type_info() {
            static app::ExtendedKeyUsageExtension__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExtendedKeyUsageExtension__Class**)(modloader::win::memory::resolve_rva(0x0471F388));
            }
            return cache;
        }
        inline app::ExtendedKeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::ExtendedKeyUsageExtension__Class>(type_info(), "Mono.Security.X509.Extensions", "ExtendedKeyUsageExtension");
        }
        inline app::ExtendedKeyUsageExtension* create() {
            return il2cpp::create_object<app::ExtendedKeyUsageExtension>(get_class());
        }
    } // namespace ExtendedKeyUsageExtension
} // namespace app::classes::types
