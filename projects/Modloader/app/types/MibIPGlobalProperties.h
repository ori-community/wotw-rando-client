#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MibIPGlobalProperties__Class.h>
#include <Modloader/app/structs/MibIPGlobalProperties.h>

namespace app::classes::types {
    namespace MibIPGlobalProperties {
        inline app::MibIPGlobalProperties__Class** type_info = (app::MibIPGlobalProperties__Class**)(modloader::win::memory::resolve_rva(0x0471AA98));
        inline app::MibIPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::MibIPGlobalProperties__Class>(type_info, "System.Net.NetworkInformation", "MibIPGlobalProperties");
        }
        inline app::MibIPGlobalProperties* create() {
            return il2cpp::create_object<app::MibIPGlobalProperties>(get_class());
        }
    } // namespace MibIPGlobalProperties
} // namespace app::classes::types
