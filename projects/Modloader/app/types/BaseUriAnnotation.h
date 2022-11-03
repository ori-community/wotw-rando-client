#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseUriAnnotation {
        inline app::BaseUriAnnotation__Class** type_info = (app::BaseUriAnnotation__Class**)(modloader::win::memory::resolve_rva(0x0478B4F0));
        inline app::BaseUriAnnotation__Class* get_class() {
            return il2cpp::get_class<app::BaseUriAnnotation__Class>(type_info, "System.Xml.Linq", "BaseUriAnnotation");
        }
        inline app::BaseUriAnnotation* create() {
            return il2cpp::create_object<app::BaseUriAnnotation>(get_class());
        }
    } // namespace BaseUriAnnotation
} // namespace app::classes::types
