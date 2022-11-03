#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageZoneB {
        namespace {
            inline app::MessageZoneB__Class* type_info_ref = nullptr;
        }
        inline app::MessageZoneB__Class** type_info = &type_info_ref;
        inline app::MessageZoneB__Class* get_class() {
            return il2cpp::get_class<app::MessageZoneB__Class>(type_info, "", "MessageZoneB");
        }
        inline app::MessageZoneB* create() {
            return il2cpp::create_object<app::MessageZoneB>(get_class());
        }
    } // namespace MessageZoneB
} // namespace app::classes::types
