#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LineInfoAnnotation {
        inline app::LineInfoAnnotation__Class** type_info = (app::LineInfoAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04774ED8));
        inline app::LineInfoAnnotation__Class* get_class() {
            return il2cpp::get_class<app::LineInfoAnnotation__Class>(type_info, "System.Xml.Linq", "LineInfoAnnotation");
        }
        inline app::LineInfoAnnotation* create() {
            return il2cpp::create_object<app::LineInfoAnnotation>(get_class());
        }
    } // namespace LineInfoAnnotation
} // namespace app::classes::types
