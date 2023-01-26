#pragma once
#include <Modloader/app/structs/NetSectionGroup.h>
#include <Modloader/app/structs/NetSectionGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NetSectionGroup {
        inline app::NetSectionGroup__Class** type_info() {
            static app::NetSectionGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NetSectionGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NetSectionGroup__Class* get_class() {
            return il2cpp::get_class<app::NetSectionGroup__Class>(type_info(), "System.Net.Configuration", "NetSectionGroup");
        }
        inline app::NetSectionGroup* create() {
            return il2cpp::create_object<app::NetSectionGroup>(get_class());
        }
    } // namespace NetSectionGroup
} // namespace app::classes::types
