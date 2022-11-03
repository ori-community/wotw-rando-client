#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonPrimitiveContract {
        inline app::JsonPrimitiveContract__Class** type_info = (app::JsonPrimitiveContract__Class**)(modloader::win::memory::resolve_rva(0x04722438));
        inline app::JsonPrimitiveContract__Class* get_class() {
            return il2cpp::get_class<app::JsonPrimitiveContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonPrimitiveContract");
        }
        inline app::JsonPrimitiveContract* create() {
            return il2cpp::create_object<app::JsonPrimitiveContract>(get_class());
        }
    } // namespace JsonPrimitiveContract
} // namespace app::classes::types
