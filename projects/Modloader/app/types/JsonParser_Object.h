#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonParser_Object__Class.h>
#include <Modloader/app/structs/JsonParser_Object.h>
#include <Modloader/app/structs/JsonParser_Object__Boxed.h>

namespace app::classes::types {
    namespace JsonParser_Object {
        inline app::JsonParser_Object__Class** type_info = (app::JsonParser_Object__Class**)(modloader::win::memory::resolve_rva(0x04725DB0));
        inline app::JsonParser_Object__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonParser_Object__Class>(type_info, "Moon", "JsonParser", "Object");
        }
        inline app::JsonParser_Object* create() {
            return il2cpp::create_object<app::JsonParser_Object>(get_class());
        }
        inline app::JsonParser_Object__Boxed* box(app::JsonParser_Object value) {
            return il2cpp::box_value<app::JsonParser_Object__Boxed>(get_class(), value);
        }
    } // namespace JsonParser_Object
} // namespace app::classes::types
