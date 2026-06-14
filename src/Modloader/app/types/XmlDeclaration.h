#pragma once
#include <Modloader/app/structs/XmlDeclaration.h>
#include <Modloader/app/structs/XmlDeclaration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlDeclaration {
        inline app::XmlDeclaration__Class** type_info() {
            static app::XmlDeclaration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlDeclaration__Class**)(modloader::win::memory::resolve_rva(0x0472B770));
            }
            return cache;
        }
        inline app::XmlDeclaration__Class* get_class() {
            return il2cpp::get_class<app::XmlDeclaration__Class>(type_info(), "System.Xml", "XmlDeclaration");
        }
        inline app::XmlDeclaration* create() {
            return il2cpp::create_object<app::XmlDeclaration>(get_class());
        }
    } // namespace XmlDeclaration
} // namespace app::classes::types
