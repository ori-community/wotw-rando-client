#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttributeMatchState__Enum__Class.h>
#include <Modloader/app/structs/AttributeMatchState__Enum.h>

namespace app::classes::types {
    namespace AttributeMatchState__Enum {
        namespace {
            inline app::AttributeMatchState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AttributeMatchState__Enum__Class** type_info = &type_info_ref;
        inline app::AttributeMatchState__Enum__Class* get_class() {
            return il2cpp::get_class<app::AttributeMatchState__Enum__Class>(type_info, "System.Xml.Schema", "AttributeMatchState");
        }
        inline app::AttributeMatchState__Enum* create() {
            return il2cpp::create_object<app::AttributeMatchState__Enum>(get_class());
        }
    } // namespace AttributeMatchState__Enum
} // namespace app::classes::types
