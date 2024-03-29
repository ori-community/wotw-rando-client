#pragma once
#include <Modloader/app/structs/JsonContainerType__Enum.h>
#include <Modloader/app/structs/JsonContainerType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonContainerType__Enum {
        inline app::JsonContainerType__Enum__Class** type_info() {
            static app::JsonContainerType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonContainerType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04791648));
            }
            return cache;
        }
        inline app::JsonContainerType__Enum__Class* get_class() {
            return il2cpp::get_class<app::JsonContainerType__Enum__Class>(type_info(), "Newtonsoft.Json", "JsonContainerType");
        }
        inline app::JsonContainerType__Enum* create() {
            return il2cpp::create_object<app::JsonContainerType__Enum>(get_class());
        }
    } // namespace JsonContainerType__Enum
} // namespace app::classes::types
