#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Operator {
        inline app::Operator__Class** type_info = (app::Operator__Class**)(modloader::win::memory::resolve_rva(0x0477D0D8));
        inline app::Operator__Class* get_class() {
            return il2cpp::get_class<app::Operator__Class>(type_info, "MS.Internal.Xml.XPath", "Operator");
        }
        inline app::Operator* create() {
            return il2cpp::create_object<app::Operator>(get_class());
        }
    } // namespace Operator
} // namespace app::classes::types
