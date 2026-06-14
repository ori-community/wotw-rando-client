#pragma once
#include <Modloader/app/structs/XmlDataLoader.h>
#include <Modloader/app/structs/XmlDataLoader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlDataLoader {
        inline app::XmlDataLoader__Class** type_info() {
            static app::XmlDataLoader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlDataLoader__Class**)(modloader::win::memory::resolve_rva(0x0474A360));
            }
            return cache;
        }
        inline app::XmlDataLoader__Class* get_class() {
            return il2cpp::get_class<app::XmlDataLoader__Class>(type_info(), "System.Data", "XmlDataLoader");
        }
        inline app::XmlDataLoader* create() {
            return il2cpp::create_object<app::XmlDataLoader>(get_class());
        }
    } // namespace XmlDataLoader
} // namespace app::classes::types
