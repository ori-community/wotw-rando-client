#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NearSeinTrigger__Class.h>
#include <Modloader/app/structs/NearSeinTrigger.h>

namespace app::classes::types {
    namespace NearSeinTrigger {
        namespace {
            inline app::NearSeinTrigger__Class* type_info_ref = nullptr;
        }
        inline app::NearSeinTrigger__Class** type_info = &type_info_ref;
        inline app::NearSeinTrigger__Class* get_class() {
            return il2cpp::get_class<app::NearSeinTrigger__Class>(type_info, "", "NearSeinTrigger");
        }
        inline app::NearSeinTrigger* create() {
            return il2cpp::create_object<app::NearSeinTrigger>(get_class());
        }
    } // namespace NearSeinTrigger
} // namespace app::classes::types
