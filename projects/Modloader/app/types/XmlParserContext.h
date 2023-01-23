#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlParserContext__Class.h>
#include <Modloader/app/structs/XmlParserContext.h>

namespace app::classes::types {
    namespace XmlParserContext {
        inline app::XmlParserContext__Class** type_info = (app::XmlParserContext__Class**)(modloader::win::memory::resolve_rva(0x0473F030));
        inline app::XmlParserContext__Class* get_class() {
            return il2cpp::get_class<app::XmlParserContext__Class>(type_info, "System.Xml", "XmlParserContext");
        }
        inline app::XmlParserContext* create() {
            return il2cpp::create_object<app::XmlParserContext>(get_class());
        }
    } // namespace XmlParserContext
} // namespace app::classes::types
