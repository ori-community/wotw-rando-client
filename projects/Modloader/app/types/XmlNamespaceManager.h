#pragma once
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlNamespaceManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNamespaceManager {
        inline app::XmlNamespaceManager__Class** type_info() {
            static app::XmlNamespaceManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNamespaceManager__Class**)(modloader::win::memory::resolve_rva(0x0478CE90));
            }
            return cache;
        }
        inline app::XmlNamespaceManager__Class* get_class() {
            return il2cpp::get_class<app::XmlNamespaceManager__Class>(type_info(), "System.Xml", "XmlNamespaceManager");
        }
        inline app::XmlNamespaceManager* create() {
            return il2cpp::create_object<app::XmlNamespaceManager>(get_class());
        }
    } // namespace XmlNamespaceManager
} // namespace app::classes::types
