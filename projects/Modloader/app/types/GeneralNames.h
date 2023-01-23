#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GeneralNames__Class.h>
#include <Modloader/app/structs/GeneralNames.h>

namespace app::classes::types {
    namespace GeneralNames {
        inline app::GeneralNames__Class** type_info = (app::GeneralNames__Class**)(modloader::win::memory::resolve_rva(0x04786388));
        inline app::GeneralNames__Class* get_class() {
            return il2cpp::get_class<app::GeneralNames__Class>(type_info, "Mono.Security.X509.Extensions", "GeneralNames");
        }
        inline app::GeneralNames* create() {
            return il2cpp::create_object<app::GeneralNames>(get_class());
        }
    } // namespace GeneralNames
} // namespace app::classes::types
