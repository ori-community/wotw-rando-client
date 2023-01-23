#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XsdBuilder_State__Enum__Class.h>
#include <Modloader/app/structs/XsdBuilder_State__Enum.h>
#include <Modloader/app/structs/XsdBuilder_State__Enum__Array.h>

namespace app::classes::types {
    namespace XsdBuilder_State__Enum {
        namespace {
            inline app::XsdBuilder_State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XsdBuilder_State__Enum__Class** type_info = &type_info_ref;
        inline app::XsdBuilder_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_State__Enum__Class>(type_info, "System.Xml.Schema", "XsdBuilder", "State");
        }
        inline app::XsdBuilder_State__Enum* create() {
            return il2cpp::create_object<app::XsdBuilder_State__Enum>(get_class());
        }
        inline app::XsdBuilder_State__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XsdBuilder_State__Enum__Array>(get_class(), size);
        }
        inline app::XsdBuilder_State__Enum__Array* create_array(const std::vector<app::XsdBuilder_State__Enum*>& items) {
            return il2cpp::array_new<app::XsdBuilder_State__Enum__Array>(get_class(), items);
        }
    } // namespace XsdBuilder_State__Enum
} // namespace app::classes::types
