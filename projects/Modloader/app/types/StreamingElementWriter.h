#pragma once
#include <Modloader/app/structs/StreamingElementWriter.h>
#include <Modloader/app/structs/StreamingElementWriter__Boxed.h>
#include <Modloader/app/structs/StreamingElementWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StreamingElementWriter {
        inline app::StreamingElementWriter__Class** type_info() {
            static app::StreamingElementWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StreamingElementWriter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StreamingElementWriter__Class* get_class() {
            return il2cpp::get_class<app::StreamingElementWriter__Class>(type_info(), "System.Xml.Linq", "StreamingElementWriter");
        }
        inline app::StreamingElementWriter* create() {
            return il2cpp::create_object<app::StreamingElementWriter>(get_class());
        }
        inline app::StreamingElementWriter__Boxed* box(app::StreamingElementWriter value) {
            return il2cpp::box_value<app::StreamingElementWriter__Boxed>(get_class(), value);
        }
    } // namespace StreamingElementWriter
} // namespace app::classes::types
