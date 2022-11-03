#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonConverterCollection {
        inline app::JsonConverterCollection__Class** type_info = (app::JsonConverterCollection__Class**)(modloader::win::memory::resolve_rva(0x0476DE10));
        inline app::JsonConverterCollection__Class* get_class() {
            return il2cpp::get_class<app::JsonConverterCollection__Class>(type_info, "Newtonsoft.Json", "JsonConverterCollection");
        }
        inline app::JsonConverterCollection* create() {
            return il2cpp::create_object<app::JsonConverterCollection>(get_class());
        }
    } // namespace JsonConverterCollection
} // namespace app::classes::types
