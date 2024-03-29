#pragma once
#include <Modloader/app/structs/KeyValuePairConverter.h>
#include <Modloader/app/structs/KeyValuePairConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePairConverter {
        inline app::KeyValuePairConverter__Class** type_info() {
            static app::KeyValuePairConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyValuePairConverter__Class**)(modloader::win::memory::resolve_rva(0x0472AF88));
            }
            return cache;
        }
        inline app::KeyValuePairConverter__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePairConverter__Class>(type_info(), "Newtonsoft.Json.Converters", "KeyValuePairConverter");
        }
        inline app::KeyValuePairConverter* create() {
            return il2cpp::create_object<app::KeyValuePairConverter>(get_class());
        }
    } // namespace KeyValuePairConverter
} // namespace app::classes::types
