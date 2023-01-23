#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlEntity__Class.h>
#include <Modloader/app/structs/XmlEntity.h>

namespace app::classes::types {
    namespace XmlEntity {
        inline app::XmlEntity__Class** type_info = (app::XmlEntity__Class**)(modloader::win::memory::resolve_rva(0x047831C0));
        inline app::XmlEntity__Class* get_class() {
            return il2cpp::get_class<app::XmlEntity__Class>(type_info, "System.Xml", "XmlEntity");
        }
        inline app::XmlEntity* create() {
            return il2cpp::create_object<app::XmlEntity>(get_class());
        }
    } // namespace XmlEntity
} // namespace app::classes::types
