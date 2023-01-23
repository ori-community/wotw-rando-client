#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JRaw__Class.h>
#include <Modloader/app/structs/JRaw.h>

namespace app::classes::types {
    namespace JRaw {
        inline app::JRaw__Class** type_info = (app::JRaw__Class**)(modloader::win::memory::resolve_rva(0x0475E448));
        inline app::JRaw__Class* get_class() {
            return il2cpp::get_class<app::JRaw__Class>(type_info, "Newtonsoft.Json.Linq", "JRaw");
        }
        inline app::JRaw* create() {
            return il2cpp::create_object<app::JRaw>(get_class());
        }
    } // namespace JRaw
} // namespace app::classes::types
