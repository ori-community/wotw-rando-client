#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonContainerType__Enum {
        inline app::JsonContainerType__Enum__Class** type_info = (app::JsonContainerType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04791648));
        inline app::JsonContainerType__Enum__Class* get_class() {
            return il2cpp::get_class<app::JsonContainerType__Enum__Class>(type_info, "Newtonsoft.Json", "JsonContainerType");
        }
        inline app::JsonContainerType__Enum* create() {
            return il2cpp::create_object<app::JsonContainerType__Enum>(get_class());
        }
    } // namespace JsonContainerType__Enum
} // namespace app::classes::types
