#pragma once
#include <Modloader/app/structs/XsdBuilder.h>
#include <Modloader/app/structs/XsdBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder {
        inline app::XsdBuilder__Class** type_info() {
            static app::XsdBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XsdBuilder__Class**)(modloader::win::memory::resolve_rva(0x04761E78));
            }
            return cache;
        }
        inline app::XsdBuilder__Class* get_class() {
            return il2cpp::get_class<app::XsdBuilder__Class>(type_info(), "System.Xml.Schema", "XsdBuilder");
        }
        inline app::XsdBuilder* create() {
            return il2cpp::create_object<app::XsdBuilder>(get_class());
        }
    } // namespace XsdBuilder
} // namespace app::classes::types
