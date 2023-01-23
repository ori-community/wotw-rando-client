#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JToken_LineInfoAnnotation__Class.h>
#include <Modloader/app/structs/JToken_LineInfoAnnotation.h>

namespace app::classes::types {
    namespace JToken_LineInfoAnnotation {
        inline app::JToken_LineInfoAnnotation__Class** type_info = (app::JToken_LineInfoAnnotation__Class**)(modloader::win::memory::resolve_rva(0x0475A8C0));
        inline app::JToken_LineInfoAnnotation__Class* get_class() {
            return il2cpp::get_nested_class<app::JToken_LineInfoAnnotation__Class>(type_info, "Newtonsoft.Json.Linq", "JToken", "LineInfoAnnotation");
        }
        inline app::JToken_LineInfoAnnotation* create() {
            return il2cpp::create_object<app::JToken_LineInfoAnnotation>(get_class());
        }
    } // namespace JToken_LineInfoAnnotation
} // namespace app::classes::types
