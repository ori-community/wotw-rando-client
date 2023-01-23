#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SchemaNames_Token__Enum__Class.h>
#include <Modloader/app/structs/SchemaNames_Token__Enum.h>

namespace app::classes::types {
    namespace SchemaNames_Token__Enum {
        namespace {
            inline app::SchemaNames_Token__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SchemaNames_Token__Enum__Class** type_info = &type_info_ref;
        inline app::SchemaNames_Token__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SchemaNames_Token__Enum__Class>(type_info, "System.Xml.Schema", "SchemaNames", "Token");
        }
        inline app::SchemaNames_Token__Enum* create() {
            return il2cpp::create_object<app::SchemaNames_Token__Enum>(get_class());
        }
    } // namespace SchemaNames_Token__Enum
} // namespace app::classes::types
