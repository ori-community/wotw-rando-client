#pragma once
#include <Modloader/app/structs/LineInfoEndElementAnnotation.h>
#include <Modloader/app/structs/LineInfoEndElementAnnotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LineInfoEndElementAnnotation {
        inline app::LineInfoEndElementAnnotation__Class** type_info() {
            static app::LineInfoEndElementAnnotation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LineInfoEndElementAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04744C48));
            }
            return cache;
        }
        inline app::LineInfoEndElementAnnotation__Class* get_class() {
            return il2cpp::get_class<app::LineInfoEndElementAnnotation__Class>(type_info(), "System.Xml.Linq", "LineInfoEndElementAnnotation");
        }
        inline app::LineInfoEndElementAnnotation* create() {
            return il2cpp::create_object<app::LineInfoEndElementAnnotation>(get_class());
        }
    } // namespace LineInfoEndElementAnnotation
} // namespace app::classes::types
