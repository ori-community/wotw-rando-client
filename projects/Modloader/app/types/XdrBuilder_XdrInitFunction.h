#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrInitFunction {
        inline app::XdrBuilder_XdrInitFunction__Class** type_info = (app::XdrBuilder_XdrInitFunction__Class**)(modloader::win::memory::resolve_rva(0x047748E0));
        inline app::XdrBuilder_XdrInitFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrInitFunction__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "XdrInitFunction");
        }
        inline app::XdrBuilder_XdrInitFunction* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrInitFunction>(get_class());
        }
    } // namespace XdrBuilder_XdrInitFunction
} // namespace app::classes::types
