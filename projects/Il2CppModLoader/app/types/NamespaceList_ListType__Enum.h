#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NamespaceList_ListType__Enum {
        namespace {
            app::NamespaceList_ListType__Enum__Class* type_info_ref = nullptr;
        }
        app::NamespaceList_ListType__Enum__Class** type_info = &type_info_ref;
        inline app::NamespaceList_ListType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::NamespaceList_ListType__Enum__Class>(type_info, "System.Xml.Schema", "NamespaceList", "ListType");
        }
        inline app::NamespaceList_ListType__Enum* create() {
            return il2cpp::create_object<app::NamespaceList_ListType__Enum>(get_class());
        }
    } // namespace NamespaceList_ListType__Enum
} // namespace app::classes::types
