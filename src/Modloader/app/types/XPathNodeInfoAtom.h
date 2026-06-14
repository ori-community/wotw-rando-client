#pragma once
#include <Modloader/app/structs/XPathNodeInfoAtom.h>
#include <Modloader/app/structs/XPathNodeInfoAtom__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathNodeInfoAtom {
        inline app::XPathNodeInfoAtom__Class** type_info() {
            static app::XPathNodeInfoAtom__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XPathNodeInfoAtom__Class**)(modloader::win::memory::resolve_rva(0x047221C0));
            }
            return cache;
        }
        inline app::XPathNodeInfoAtom__Class* get_class() {
            return il2cpp::get_class<app::XPathNodeInfoAtom__Class>(type_info(), "MS.Internal.Xml.Cache", "XPathNodeInfoAtom");
        }
        inline app::XPathNodeInfoAtom* create() {
            return il2cpp::create_object<app::XPathNodeInfoAtom>(get_class());
        }
    } // namespace XPathNodeInfoAtom
} // namespace app::classes::types
