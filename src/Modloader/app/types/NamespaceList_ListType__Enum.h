#pragma once
#include <Modloader/app/structs/NamespaceList_ListType__Enum.h>
#include <Modloader/app/structs/NamespaceList_ListType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NamespaceList_ListType__Enum {
        inline app::NamespaceList_ListType__Enum__Class** type_info() {
            static app::NamespaceList_ListType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NamespaceList_ListType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NamespaceList_ListType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::NamespaceList_ListType__Enum__Class>(type_info(), "System.Xml.Schema", "NamespaceList", "ListType");
        }
        inline app::NamespaceList_ListType__Enum* create() {
            return il2cpp::create_object<app::NamespaceList_ListType__Enum>(get_class());
        }
    } // namespace NamespaceList_ListType__Enum
} // namespace app::classes::types
