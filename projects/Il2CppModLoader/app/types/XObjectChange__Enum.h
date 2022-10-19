#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XObjectChange__Enum {
        namespace {
            inline app::XObjectChange__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XObjectChange__Enum__Class** type_info = &type_info_ref;
        inline app::XObjectChange__Enum__Class* get_class() {
            return il2cpp::get_class<app::XObjectChange__Enum__Class>(type_info, "System.Xml.Linq", "XObjectChange");
        }
        inline app::XObjectChange__Enum* create() {
            return il2cpp::create_object<app::XObjectChange__Enum>(get_class());
        }
    } // namespace XObjectChange__Enum
} // namespace app::classes::types
