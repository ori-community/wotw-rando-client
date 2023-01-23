#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExtensionDataSetter__Class.h>
#include <Modloader/app/structs/ExtensionDataSetter.h>

namespace app::classes::types {
    namespace ExtensionDataSetter {
        inline app::ExtensionDataSetter__Class** type_info = (app::ExtensionDataSetter__Class**)(modloader::win::memory::resolve_rva(0x0478C310));
        inline app::ExtensionDataSetter__Class* get_class() {
            return il2cpp::get_class<app::ExtensionDataSetter__Class>(type_info, "Newtonsoft.Json.Serialization", "ExtensionDataSetter");
        }
        inline app::ExtensionDataSetter* create() {
            return il2cpp::create_object<app::ExtensionDataSetter>(get_class());
        }
    } // namespace ExtensionDataSetter
} // namespace app::classes::types
