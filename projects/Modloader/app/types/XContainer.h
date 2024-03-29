#pragma once
#include <Modloader/app/structs/XContainer.h>
#include <Modloader/app/structs/XContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XContainer {
        inline app::XContainer__Class** type_info() {
            static app::XContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XContainer__Class**)(modloader::win::memory::resolve_rva(0x0476A7F8));
            }
            return cache;
        }
        inline app::XContainer__Class* get_class() {
            return il2cpp::get_class<app::XContainer__Class>(type_info(), "System.Xml.Linq", "XContainer");
        }
        inline app::XContainer* create() {
            return il2cpp::create_object<app::XContainer>(get_class());
        }
    } // namespace XContainer
} // namespace app::classes::types
