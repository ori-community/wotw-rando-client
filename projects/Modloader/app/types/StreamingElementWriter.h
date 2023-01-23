#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StreamingElementWriter__Class.h>
#include <Modloader/app/structs/StreamingElementWriter.h>
#include <Modloader/app/structs/StreamingElementWriter__Boxed.h>

namespace app::classes::types {
    namespace StreamingElementWriter {
        namespace {
            inline app::StreamingElementWriter__Class* type_info_ref = nullptr;
        }
        inline app::StreamingElementWriter__Class** type_info = &type_info_ref;
        inline app::StreamingElementWriter__Class* get_class() {
            return il2cpp::get_class<app::StreamingElementWriter__Class>(type_info, "System.Xml.Linq", "StreamingElementWriter");
        }
        inline app::StreamingElementWriter* create() {
            return il2cpp::create_object<app::StreamingElementWriter>(get_class());
        }
        inline app::StreamingElementWriter__Boxed* box(app::StreamingElementWriter value) {
            return il2cpp::box_value<app::StreamingElementWriter__Boxed>(get_class(), value);
        }
    } // namespace StreamingElementWriter
} // namespace app::classes::types
