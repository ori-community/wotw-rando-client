#pragma once
#include <Modloader/app/structs/XmlParserContext.h>
#include <Modloader/app/structs/XmlParserContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlParserContext {
        inline app::XmlParserContext__Class** type_info() {
            static app::XmlParserContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlParserContext__Class**)(modloader::win::memory::resolve_rva(0x0473F030));
            }
            return cache;
        }
        inline app::XmlParserContext__Class* get_class() {
            return il2cpp::get_class<app::XmlParserContext__Class>(type_info(), "System.Xml", "XmlParserContext");
        }
        inline app::XmlParserContext* create() {
            return il2cpp::create_object<app::XmlParserContext>(get_class());
        }
    } // namespace XmlParserContext
} // namespace app::classes::types
