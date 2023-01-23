#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonException__Class.h>
#include <Modloader/app/structs/JsonException.h>

namespace app::classes::types {
    namespace JsonException {
        inline app::JsonException__Class** type_info = (app::JsonException__Class**)(modloader::win::memory::resolve_rva(0x04781DA8));
        inline app::JsonException__Class* get_class() {
            return il2cpp::get_class<app::JsonException__Class>(type_info, "Newtonsoft.Json", "JsonException");
        }
        inline app::JsonException* create() {
            return il2cpp::create_object<app::JsonException>(get_class());
        }
    } // namespace JsonException
} // namespace app::classes::types
