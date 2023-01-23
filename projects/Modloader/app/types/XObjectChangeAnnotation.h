#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XObjectChangeAnnotation__Class.h>
#include <Modloader/app/structs/XObjectChangeAnnotation.h>

namespace app::classes::types {
    namespace XObjectChangeAnnotation {
        inline app::XObjectChangeAnnotation__Class** type_info = (app::XObjectChangeAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04761918));
        inline app::XObjectChangeAnnotation__Class* get_class() {
            return il2cpp::get_class<app::XObjectChangeAnnotation__Class>(type_info, "System.Xml.Linq", "XObjectChangeAnnotation");
        }
        inline app::XObjectChangeAnnotation* create() {
            return il2cpp::create_object<app::XObjectChangeAnnotation>(get_class());
        }
    } // namespace XObjectChangeAnnotation
} // namespace app::classes::types
