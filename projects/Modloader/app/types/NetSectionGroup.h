#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NetSectionGroup {
        namespace {
            inline app::NetSectionGroup__Class* type_info_ref = nullptr;
        }
        inline app::NetSectionGroup__Class** type_info = &type_info_ref;
        inline app::NetSectionGroup__Class* get_class() {
            return il2cpp::get_class<app::NetSectionGroup__Class>(type_info, "System.Net.Configuration", "NetSectionGroup");
        }
        inline app::NetSectionGroup* create() {
            return il2cpp::create_object<app::NetSectionGroup>(get_class());
        }
    } // namespace NetSectionGroup
} // namespace app::classes::types
