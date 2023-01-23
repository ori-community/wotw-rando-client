#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DoubleLinkAxis__Class.h>
#include <Modloader/app/structs/DoubleLinkAxis.h>

namespace app::classes::types {
    namespace DoubleLinkAxis {
        inline app::DoubleLinkAxis__Class** type_info = (app::DoubleLinkAxis__Class**)(modloader::win::memory::resolve_rva(0x04757068));
        inline app::DoubleLinkAxis__Class* get_class() {
            return il2cpp::get_class<app::DoubleLinkAxis__Class>(type_info, "System.Xml.Schema", "DoubleLinkAxis");
        }
        inline app::DoubleLinkAxis* create() {
            return il2cpp::create_object<app::DoubleLinkAxis>(get_class());
        }
    } // namespace DoubleLinkAxis
} // namespace app::classes::types
