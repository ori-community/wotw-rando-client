#pragma once
#include <Modloader/app/structs/UnreferencedObjectEventHandler.h>
#include <Modloader/app/structs/UnreferencedObjectEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnreferencedObjectEventHandler {
        inline app::UnreferencedObjectEventHandler__Class** type_info() {
            static app::UnreferencedObjectEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnreferencedObjectEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnreferencedObjectEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UnreferencedObjectEventHandler__Class>(type_info(), "System.Xml.Serialization", "UnreferencedObjectEventHandler");
        }
        inline app::UnreferencedObjectEventHandler* create() {
            return il2cpp::create_object<app::UnreferencedObjectEventHandler>(get_class());
        }
    } // namespace UnreferencedObjectEventHandler
} // namespace app::classes::types
