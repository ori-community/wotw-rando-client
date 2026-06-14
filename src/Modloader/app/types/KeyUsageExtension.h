#pragma once
#include <Modloader/app/structs/KeyUsageExtension.h>
#include <Modloader/app/structs/KeyUsageExtension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyUsageExtension {
        inline app::KeyUsageExtension__Class** type_info() {
            static app::KeyUsageExtension__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyUsageExtension__Class**)(modloader::win::memory::resolve_rva(0x04775568));
            }
            return cache;
        }
        inline app::KeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::KeyUsageExtension__Class>(type_info(), "Mono.Security.X509.Extensions", "KeyUsageExtension");
        }
        inline app::KeyUsageExtension* create() {
            return il2cpp::create_object<app::KeyUsageExtension>(get_class());
        }
    } // namespace KeyUsageExtension
} // namespace app::classes::types
