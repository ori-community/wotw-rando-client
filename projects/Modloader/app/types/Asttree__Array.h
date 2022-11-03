#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Asttree__Array {
        inline app::Asttree__Array__Class** type_info = (app::Asttree__Array__Class**)(modloader::win::memory::resolve_rva(0x0470F5A0));
        inline app::Asttree__Array__Class* get_class() {
            return il2cpp::get_class<app::Asttree__Array__Class>(type_info, "System.Xml.Schema", "Asttree[]");
        }
        inline app::Asttree__Array* create() {
            return il2cpp::create_object<app::Asttree__Array>(get_class());
        }
    } // namespace Asttree__Array
} // namespace app::classes::types
