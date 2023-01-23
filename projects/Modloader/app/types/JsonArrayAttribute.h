#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonArrayAttribute__Class.h>
#include <Modloader/app/structs/JsonArrayAttribute.h>

namespace app::classes::types {
    namespace JsonArrayAttribute {
        inline app::JsonArrayAttribute__Class** type_info = (app::JsonArrayAttribute__Class**)(modloader::win::memory::resolve_rva(0x0476DF58));
        inline app::JsonArrayAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonArrayAttribute__Class>(type_info, "Newtonsoft.Json", "JsonArrayAttribute");
        }
        inline app::JsonArrayAttribute* create() {
            return il2cpp::create_object<app::JsonArrayAttribute>(get_class());
        }
    } // namespace JsonArrayAttribute
} // namespace app::classes::types
