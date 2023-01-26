#pragma once
#include <Modloader/app/structs/NamespaceList.h>
#include <Modloader/app/structs/NamespaceList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NamespaceList {
        inline app::NamespaceList__Class** type_info() {
            static app::NamespaceList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NamespaceList__Class**)(modloader::win::memory::resolve_rva(0x0478A9F0));
            }
            return cache;
        }
        inline app::NamespaceList__Class* get_class() {
            return il2cpp::get_class<app::NamespaceList__Class>(type_info(), "System.Xml.Schema", "NamespaceList");
        }
        inline app::NamespaceList* create() {
            return il2cpp::create_object<app::NamespaceList>(get_class());
        }
    } // namespace NamespaceList
} // namespace app::classes::types
