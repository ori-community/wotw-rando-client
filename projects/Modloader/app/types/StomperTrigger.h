#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StomperTrigger {
        namespace {
            inline app::StomperTrigger__Class* type_info_ref = nullptr;
        }
        inline app::StomperTrigger__Class** type_info = &type_info_ref;
        inline app::StomperTrigger__Class* get_class() {
            return il2cpp::get_class<app::StomperTrigger__Class>(type_info, "", "StomperTrigger");
        }
        inline app::StomperTrigger* create() {
            return il2cpp::create_object<app::StomperTrigger>(get_class());
        }
    } // namespace StomperTrigger
} // namespace app::classes::types
