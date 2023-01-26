#pragma once
#include <Modloader/app/structs/XStreamingElement.h>
#include <Modloader/app/structs/XStreamingElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XStreamingElement {
        inline app::XStreamingElement__Class** type_info() {
            static app::XStreamingElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XStreamingElement__Class**)(modloader::win::memory::resolve_rva(0x04781C90));
            }
            return cache;
        }
        inline app::XStreamingElement__Class* get_class() {
            return il2cpp::get_class<app::XStreamingElement__Class>(type_info(), "System.Xml.Linq", "XStreamingElement");
        }
        inline app::XStreamingElement* create() {
            return il2cpp::create_object<app::XStreamingElement>(get_class());
        }
    } // namespace XStreamingElement
} // namespace app::classes::types
