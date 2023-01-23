#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonObjectAttribute__Class.h>
#include <Modloader/app/structs/JsonObjectAttribute.h>

namespace app::classes::types {
    namespace JsonObjectAttribute {
        inline app::JsonObjectAttribute__Class** type_info = (app::JsonObjectAttribute__Class**)(modloader::win::memory::resolve_rva(0x04758A30));
        inline app::JsonObjectAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonObjectAttribute__Class>(type_info, "Newtonsoft.Json", "JsonObjectAttribute");
        }
        inline app::JsonObjectAttribute* create() {
            return il2cpp::create_object<app::JsonObjectAttribute>(get_class());
        }
    } // namespace JsonObjectAttribute
} // namespace app::classes::types
