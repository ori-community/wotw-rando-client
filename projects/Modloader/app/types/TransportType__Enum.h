#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransportType__Enum__Class.h>
#include <Modloader/app/structs/TransportType__Enum.h>

namespace app::classes::types {
    namespace TransportType__Enum {
        inline app::TransportType__Enum__Class** type_info = (app::TransportType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04707920));
        inline app::TransportType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TransportType__Enum__Class>(type_info, "System.Net", "TransportType");
        }
        inline app::TransportType__Enum* create() {
            return il2cpp::create_object<app::TransportType__Enum>(get_class());
        }
    } // namespace TransportType__Enum
} // namespace app::classes::types
