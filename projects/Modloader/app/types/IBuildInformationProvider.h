#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBuildInformationProvider {
        inline app::IBuildInformationProvider__Class** type_info = (app::IBuildInformationProvider__Class**)(modloader::win::memory::resolve_rva(0x0476A240));
        inline app::IBuildInformationProvider__Class* get_class() {
            return il2cpp::get_class<app::IBuildInformationProvider__Class>(type_info, "", "IBuildInformationProvider");
        }
    } // namespace IBuildInformationProvider
} // namespace app::classes::types
