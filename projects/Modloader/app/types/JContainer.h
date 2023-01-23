#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JContainer__Class.h>
#include <Modloader/app/structs/JContainer.h>

namespace app::classes::types {
    namespace JContainer {
        inline app::JContainer__Class** type_info = (app::JContainer__Class**)(modloader::win::memory::resolve_rva(0x04757EF0));
        inline app::JContainer__Class* get_class() {
            return il2cpp::get_class<app::JContainer__Class>(type_info, "Newtonsoft.Json.Linq", "JContainer");
        }
        inline app::JContainer* create() {
            return il2cpp::create_object<app::JContainer>(get_class());
        }
    } // namespace JContainer
} // namespace app::classes::types
