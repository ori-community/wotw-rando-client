#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkObjectInfo__Class.h>
#include <Modloader/app/structs/AkObjectInfo.h>

namespace app::classes::types {
    namespace AkObjectInfo {
        inline app::AkObjectInfo__Class** type_info = (app::AkObjectInfo__Class**)(modloader::win::memory::resolve_rva(0x04733658));
        inline app::AkObjectInfo__Class* get_class() {
            return il2cpp::get_class<app::AkObjectInfo__Class>(type_info, "", "AkObjectInfo");
        }
        inline app::AkObjectInfo* create() {
            return il2cpp::create_object<app::AkObjectInfo>(get_class());
        }
    } // namespace AkObjectInfo
} // namespace app::classes::types
