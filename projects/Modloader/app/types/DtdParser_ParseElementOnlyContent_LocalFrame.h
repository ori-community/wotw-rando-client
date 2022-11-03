#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DtdParser_ParseElementOnlyContent_LocalFrame {
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Class** type_info = (app::DtdParser_ParseElementOnlyContent_LocalFrame__Class**)(modloader::win::memory::resolve_rva(0x0470D218));
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::DtdParser_ParseElementOnlyContent_LocalFrame__Class>(type_info, "System.Xml", "DtdParser", "ParseElementOnlyContent_LocalFrame");
        }
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame* create() {
            return il2cpp::create_object<app::DtdParser_ParseElementOnlyContent_LocalFrame>(get_class());
        }
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Array* create_array(int size) {
            return il2cpp::array_new<app::DtdParser_ParseElementOnlyContent_LocalFrame__Array>(get_class(), size);
        }
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Array* create_array(const std::vector<app::DtdParser_ParseElementOnlyContent_LocalFrame*>& items) {
            return il2cpp::array_new<app::DtdParser_ParseElementOnlyContent_LocalFrame__Array>(get_class(), items);
        }
    } // namespace DtdParser_ParseElementOnlyContent_LocalFrame
} // namespace app::classes::types
