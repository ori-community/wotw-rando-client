#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XObjectChangeEventArgs {
        inline app::XObjectChangeEventArgs__Class** type_info = (app::XObjectChangeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04754868));
        inline app::XObjectChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XObjectChangeEventArgs__Class>(type_info, "System.Xml.Linq", "XObjectChangeEventArgs");
        }
        inline app::XObjectChangeEventArgs* create() {
            return il2cpp::create_object<app::XObjectChangeEventArgs>(get_class());
        }
    } // namespace XObjectChangeEventArgs
} // namespace app::classes::types
