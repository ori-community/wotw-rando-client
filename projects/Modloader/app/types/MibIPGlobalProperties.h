#pragma once
#include <Modloader/app/structs/MibIPGlobalProperties.h>
#include <Modloader/app/structs/MibIPGlobalProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MibIPGlobalProperties {
        inline app::MibIPGlobalProperties__Class** type_info() {
            static app::MibIPGlobalProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MibIPGlobalProperties__Class**)(modloader::win::memory::resolve_rva(0x0471AA98));
            }
            return cache;
        }
        inline app::MibIPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::MibIPGlobalProperties__Class>(type_info(), "System.Net.NetworkInformation", "MibIPGlobalProperties");
        }
        inline app::MibIPGlobalProperties* create() {
            return il2cpp::create_object<app::MibIPGlobalProperties>(get_class());
        }
    } // namespace MibIPGlobalProperties
} // namespace app::classes::types
