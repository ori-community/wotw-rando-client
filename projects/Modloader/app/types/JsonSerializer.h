#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonSerializer {
        inline app::JsonSerializer__Class** type_info = (app::JsonSerializer__Class**)(modloader::win::memory::resolve_rva(0x0472B7C8));
        inline app::JsonSerializer__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializer__Class>(type_info, "Newtonsoft.Json", "JsonSerializer");
        }
        inline app::JsonSerializer* create() {
            return il2cpp::create_object<app::JsonSerializer>(get_class());
        }
    } // namespace JsonSerializer
} // namespace app::classes::types
