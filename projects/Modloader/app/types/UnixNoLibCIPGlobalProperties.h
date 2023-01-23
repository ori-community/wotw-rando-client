#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnixNoLibCIPGlobalProperties__Class.h>
#include <Modloader/app/structs/UnixNoLibCIPGlobalProperties.h>

namespace app::classes::types {
    namespace UnixNoLibCIPGlobalProperties {
        inline app::UnixNoLibCIPGlobalProperties__Class** type_info = (app::UnixNoLibCIPGlobalProperties__Class**)(modloader::win::memory::resolve_rva(0x04751898));
        inline app::UnixNoLibCIPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::UnixNoLibCIPGlobalProperties__Class>(type_info, "System.Net.NetworkInformation", "UnixNoLibCIPGlobalProperties");
        }
        inline app::UnixNoLibCIPGlobalProperties* create() {
            return il2cpp::create_object<app::UnixNoLibCIPGlobalProperties>(get_class());
        }
    } // namespace UnixNoLibCIPGlobalProperties
} // namespace app::classes::types
