#pragma once
#include <Modloader/app/structs/JConstructor.h>
#include <Modloader/app/structs/JConstructor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JConstructor {
        inline app::JConstructor__Class** type_info() {
            static app::JConstructor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JConstructor__Class**)(modloader::win::memory::resolve_rva(0x04797450));
            }
            return cache;
        }
        inline app::JConstructor__Class* get_class() {
            return il2cpp::get_class<app::JConstructor__Class>(type_info(), "Newtonsoft.Json.Linq", "JConstructor");
        }
        inline app::JConstructor* create() {
            return il2cpp::create_object<app::JConstructor>(get_class());
        }
    } // namespace JConstructor
} // namespace app::classes::types
