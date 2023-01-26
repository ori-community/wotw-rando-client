#pragma once
#include <Modloader/app/structs/ExpandoObjectConverter.h>
#include <Modloader/app/structs/ExpandoObjectConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpandoObjectConverter {
        inline app::ExpandoObjectConverter__Class** type_info() {
            static app::ExpandoObjectConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExpandoObjectConverter__Class**)(modloader::win::memory::resolve_rva(0x0478B2E8));
            }
            return cache;
        }
        inline app::ExpandoObjectConverter__Class* get_class() {
            return il2cpp::get_class<app::ExpandoObjectConverter__Class>(type_info(), "Newtonsoft.Json.Converters", "ExpandoObjectConverter");
        }
        inline app::ExpandoObjectConverter* create() {
            return il2cpp::create_object<app::ExpandoObjectConverter>(get_class());
        }
    } // namespace ExpandoObjectConverter
} // namespace app::classes::types
