#pragma once
#include <Modloader/app/structs/UnixIPGlobalProperties.h>
#include <Modloader/app/structs/UnixIPGlobalProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnixIPGlobalProperties {
        inline app::UnixIPGlobalProperties__Class** type_info() {
            static app::UnixIPGlobalProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnixIPGlobalProperties__Class**)(modloader::win::memory::resolve_rva(0x04785EF8));
            }
            return cache;
        }
        inline app::UnixIPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::UnixIPGlobalProperties__Class>(type_info(), "System.Net.NetworkInformation", "UnixIPGlobalProperties");
        }
        inline app::UnixIPGlobalProperties* create() {
            return il2cpp::create_object<app::UnixIPGlobalProperties>(get_class());
        }
    } // namespace UnixIPGlobalProperties
} // namespace app::classes::types
