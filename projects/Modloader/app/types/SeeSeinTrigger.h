#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeeSeinTrigger__Class.h>
#include <Modloader/app/structs/SeeSeinTrigger.h>

namespace app::classes::types {
    namespace SeeSeinTrigger {
        namespace {
            inline app::SeeSeinTrigger__Class* type_info_ref = nullptr;
        }
        inline app::SeeSeinTrigger__Class** type_info = &type_info_ref;
        inline app::SeeSeinTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeeSeinTrigger__Class>(type_info, "", "SeeSeinTrigger");
        }
        inline app::SeeSeinTrigger* create() {
            return il2cpp::create_object<app::SeeSeinTrigger>(get_class());
        }
    } // namespace SeeSeinTrigger
} // namespace app::classes::types
