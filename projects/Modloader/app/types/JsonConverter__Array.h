#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonConverter__Array {
        inline app::JsonConverter__Array__Class** type_info = (app::JsonConverter__Array__Class**)(modloader::win::memory::resolve_rva(0x047346B8));
        inline app::JsonConverter__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonConverter__Array__Class>(type_info, "Newtonsoft.Json", "JsonConverter[]");
        }
        inline app::JsonConverter__Array* create() {
            return il2cpp::create_object<app::JsonConverter__Array>(get_class());
        }
    } // namespace JsonConverter__Array
} // namespace app::classes::types
