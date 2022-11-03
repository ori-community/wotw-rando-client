#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonObjectContract {
        inline app::JsonObjectContract__Class** type_info = (app::JsonObjectContract__Class**)(modloader::win::memory::resolve_rva(0x0473CE60));
        inline app::JsonObjectContract__Class* get_class() {
            return il2cpp::get_class<app::JsonObjectContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonObjectContract");
        }
        inline app::JsonObjectContract* create() {
            return il2cpp::create_object<app::JsonObjectContract>(get_class());
        }
    } // namespace JsonObjectContract
} // namespace app::classes::types
