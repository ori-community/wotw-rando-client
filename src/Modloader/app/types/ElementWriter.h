#pragma once
#include <Modloader/app/structs/ElementWriter.h>
#include <Modloader/app/structs/ElementWriter__Boxed.h>
#include <Modloader/app/structs/ElementWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ElementWriter {
        inline app::ElementWriter__Class** type_info() {
            static app::ElementWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ElementWriter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ElementWriter__Class* get_class() {
            return il2cpp::get_class<app::ElementWriter__Class>(type_info(), "System.Xml.Linq", "ElementWriter");
        }
        inline app::ElementWriter* create() {
            return il2cpp::create_object<app::ElementWriter>(get_class());
        }
        inline app::ElementWriter__Boxed* box(app::ElementWriter value) {
            return il2cpp::box_value<app::ElementWriter__Boxed>(get_class(), value);
        }
    } // namespace ElementWriter
} // namespace app::classes::types
