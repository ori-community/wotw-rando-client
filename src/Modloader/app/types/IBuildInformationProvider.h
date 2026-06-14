#pragma once
#include <Modloader/app/structs/IBuildInformationProvider.h>
#include <Modloader/app/structs/IBuildInformationProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBuildInformationProvider {
        inline app::IBuildInformationProvider__Class** type_info() {
            static app::IBuildInformationProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBuildInformationProvider__Class**)(modloader::win::memory::resolve_rva(0x0476A240));
            }
            return cache;
        }
        inline app::IBuildInformationProvider__Class* get_class() {
            return il2cpp::get_class<app::IBuildInformationProvider__Class>(type_info(), "", "IBuildInformationProvider");
        }
    } // namespace IBuildInformationProvider
} // namespace app::classes::types
