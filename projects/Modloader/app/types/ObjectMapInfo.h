#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectMapInfo__Class.h>
#include <Modloader/app/structs/ObjectMapInfo.h>

namespace app::classes::types {
    namespace ObjectMapInfo {
        inline app::ObjectMapInfo__Class** type_info = (app::ObjectMapInfo__Class**)(modloader::win::memory::resolve_rva(0x0477C5F8));
        inline app::ObjectMapInfo__Class* get_class() {
            return il2cpp::get_class<app::ObjectMapInfo__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ObjectMapInfo");
        }
        inline app::ObjectMapInfo* create() {
            return il2cpp::create_object<app::ObjectMapInfo>(get_class());
        }
    } // namespace ObjectMapInfo
} // namespace app::classes::types
