#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Operand {
        inline app::Operand__Class** type_info = (app::Operand__Class**)(modloader::win::memory::resolve_rva(0x0476AF68));
        inline app::Operand__Class* get_class() {
            return il2cpp::get_class<app::Operand__Class>(type_info, "MS.Internal.Xml.XPath", "Operand");
        }
        inline app::Operand* create() {
            return il2cpp::create_object<app::Operand>(get_class());
        }
    } // namespace Operand
} // namespace app::classes::types
