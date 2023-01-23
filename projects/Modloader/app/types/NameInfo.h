#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NameInfo__Class.h>
#include <Modloader/app/structs/NameInfo.h>

namespace app::classes::types {
    namespace NameInfo {
        inline app::NameInfo__Class** type_info = (app::NameInfo__Class**)(modloader::win::memory::resolve_rva(0x04735F50));
        inline app::NameInfo__Class* get_class() {
            return il2cpp::get_class<app::NameInfo__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "NameInfo");
        }
        inline app::NameInfo* create() {
            return il2cpp::create_object<app::NameInfo>(get_class());
        }
    } // namespace NameInfo
} // namespace app::classes::types
