#pragma once
#include <Modloader/app/structs/XmlSyntaxException.h>
#include <Modloader/app/structs/XmlSyntaxException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSyntaxException {
        inline app::XmlSyntaxException__Class** type_info() {
            static app::XmlSyntaxException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSyntaxException__Class**)(modloader::win::memory::resolve_rva(0x04770078));
            }
            return cache;
        }
        inline app::XmlSyntaxException__Class* get_class() {
            return il2cpp::get_class<app::XmlSyntaxException__Class>(type_info(), "System.Security", "XmlSyntaxException");
        }
        inline app::XmlSyntaxException* create() {
            return il2cpp::create_object<app::XmlSyntaxException>(get_class());
        }
    } // namespace XmlSyntaxException
} // namespace app::classes::types
