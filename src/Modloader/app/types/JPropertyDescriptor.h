#pragma once
#include <Modloader/app/structs/JPropertyDescriptor.h>
#include <Modloader/app/structs/JPropertyDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JPropertyDescriptor {
        inline app::JPropertyDescriptor__Class** type_info() {
            static app::JPropertyDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04730708));
            }
            return cache;
        }
        inline app::JPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::JPropertyDescriptor__Class>(type_info(), "Newtonsoft.Json.Linq", "JPropertyDescriptor");
        }
        inline app::JPropertyDescriptor* create() {
            return il2cpp::create_object<app::JPropertyDescriptor>(get_class());
        }
    } // namespace JPropertyDescriptor
} // namespace app::classes::types
