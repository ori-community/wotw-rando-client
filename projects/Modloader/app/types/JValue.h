#pragma once
#include <Modloader/app/structs/JValue.h>
#include <Modloader/app/structs/JValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JValue {
        inline app::JValue__Class** type_info() {
            static app::JValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JValue__Class**)(modloader::win::memory::resolve_rva(0x04759368));
            }
            return cache;
        }
        inline app::JValue__Class* get_class() {
            return il2cpp::get_class<app::JValue__Class>(type_info(), "Newtonsoft.Json.Linq", "JValue");
        }
        inline app::JValue* create() {
            return il2cpp::create_object<app::JValue>(get_class());
        }
    } // namespace JValue
} // namespace app::classes::types
