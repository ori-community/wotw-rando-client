#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XContainer__Class.h>
#include <Modloader/app/structs/XContainer.h>

namespace app::classes::types {
    namespace XContainer {
        inline app::XContainer__Class** type_info = (app::XContainer__Class**)(modloader::win::memory::resolve_rva(0x0476A7F8));
        inline app::XContainer__Class* get_class() {
            return il2cpp::get_class<app::XContainer__Class>(type_info, "System.Xml.Linq", "XContainer");
        }
        inline app::XContainer* create() {
            return il2cpp::create_object<app::XContainer>(get_class());
        }
    } // namespace XContainer
} // namespace app::classes::types
