#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonArray {
        inline app::JsonArray__Class** type_info = (app::JsonArray__Class**)(modloader::win::memory::resolve_rva(0x047263B8));
        inline app::JsonArray__Class* get_class() {
            return il2cpp::get_class<app::JsonArray__Class>(type_info, "PlayFab.Json", "JsonArray");
        }
        inline app::JsonArray* create() {
            return il2cpp::create_object<app::JsonArray>(get_class());
        }
    } // namespace JsonArray
} // namespace app::classes::types
