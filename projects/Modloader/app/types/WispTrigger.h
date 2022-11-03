#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WispTrigger {
        namespace {
            inline app::WispTrigger__Class* type_info_ref = nullptr;
        }
        inline app::WispTrigger__Class** type_info = &type_info_ref;
        inline app::WispTrigger__Class* get_class() {
            return il2cpp::get_class<app::WispTrigger__Class>(type_info, "", "WispTrigger");
        }
        inline app::WispTrigger* create() {
            return il2cpp::create_object<app::WispTrigger>(get_class());
        }
    } // namespace WispTrigger
} // namespace app::classes::types
