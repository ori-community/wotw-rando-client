#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SharedInformation__Class.h>
#include <Modloader/app/structs/SharedInformation.h>

namespace app::classes::types {
    namespace SharedInformation {
        inline app::SharedInformation__Class** type_info = (app::SharedInformation__Class**)(modloader::win::memory::resolve_rva(0x0472B3D0));
        inline app::SharedInformation__Class* get_class() {
            return il2cpp::get_class<app::SharedInformation__Class>(type_info, "", "SharedInformation");
        }
        inline app::SharedInformation* create() {
            return il2cpp::create_object<app::SharedInformation>(get_class());
        }
    } // namespace SharedInformation
} // namespace app::classes::types
