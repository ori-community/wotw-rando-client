#pragma once
#include <Modloader/app/structs/JRaw.h>
#include <Modloader/app/structs/JRaw__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JRaw {
        inline app::JRaw__Class** type_info() {
            static app::JRaw__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JRaw__Class**)(modloader::win::memory::resolve_rva(0x0475E448));
            }
            return cache;
        }
        inline app::JRaw__Class* get_class() {
            return il2cpp::get_class<app::JRaw__Class>(type_info(), "Newtonsoft.Json.Linq", "JRaw");
        }
        inline app::JRaw* create() {
            return il2cpp::create_object<app::JRaw>(get_class());
        }
    } // namespace JRaw
} // namespace app::classes::types
