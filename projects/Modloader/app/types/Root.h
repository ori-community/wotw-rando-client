#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Root__Class.h>
#include <Modloader/app/structs/Root.h>

namespace app::classes::types {
    namespace Root {
        inline app::Root__Class** type_info = (app::Root__Class**)(modloader::win::memory::resolve_rva(0x0471A940));
        inline app::Root__Class* get_class() {
            return il2cpp::get_class<app::Root__Class>(type_info, "MS.Internal.Xml.XPath", "Root");
        }
        inline app::Root* create() {
            return il2cpp::create_object<app::Root>(get_class());
        }
    } // namespace Root
} // namespace app::classes::types
