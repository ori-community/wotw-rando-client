#pragma once
#include <Modloader/app/structs/XmlEntity.h>
#include <Modloader/app/structs/XmlEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlEntity {
        inline app::XmlEntity__Class** type_info() {
            static app::XmlEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlEntity__Class**)(modloader::win::memory::resolve_rva(0x047831C0));
            }
            return cache;
        }
        inline app::XmlEntity__Class* get_class() {
            return il2cpp::get_class<app::XmlEntity__Class>(type_info(), "System.Xml", "XmlEntity");
        }
        inline app::XmlEntity* create() {
            return il2cpp::create_object<app::XmlEntity>(get_class());
        }
    } // namespace XmlEntity
} // namespace app::classes::types
