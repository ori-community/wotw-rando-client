#pragma once
#include <Modloader/app/structs/AxisElement.h>
#include <Modloader/app/structs/AxisElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AxisElement {
        inline app::AxisElement__Class** type_info() {
            static app::AxisElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AxisElement__Class**)(modloader::win::memory::resolve_rva(0x04780718));
            }
            return cache;
        }
        inline app::AxisElement__Class* get_class() {
            return il2cpp::get_class<app::AxisElement__Class>(type_info(), "System.Xml.Schema", "AxisElement");
        }
        inline app::AxisElement* create() {
            return il2cpp::create_object<app::AxisElement>(get_class());
        }
    } // namespace AxisElement
} // namespace app::classes::types
