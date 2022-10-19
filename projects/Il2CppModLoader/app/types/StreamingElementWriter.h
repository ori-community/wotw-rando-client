#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
