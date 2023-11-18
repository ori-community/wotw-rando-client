#pragma once
#include <Modloader/app/structs/XObjectChangeAnnotation.h>
#include <Modloader/app/structs/XObjectChangeAnnotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XObjectChangeAnnotation {
        inline app::XObjectChangeAnnotation__Class** type_info() {
            static app::XObjectChangeAnnotation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XObjectChangeAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04761918));
            }
            return cache;
        }
        inline app::XObjectChangeAnnotation__Class* get_class() {
            return il2cpp::get_class<app::XObjectChangeAnnotation__Class>(type_info(), "System.Xml.Linq", "XObjectChangeAnnotation");
        }
        inline app::XObjectChangeAnnotation* create() {
            return il2cpp::create_object<app::XObjectChangeAnnotation>(get_class());
        }
    } // namespace XObjectChangeAnnotation
} // namespace app::classes::types
