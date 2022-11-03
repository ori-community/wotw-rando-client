#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEnterExitTrigger {
        namespace {
            inline app::SeinEnterExitTrigger__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnterExitTrigger__Class** type_info = &type_info_ref;
        inline app::SeinEnterExitTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeinEnterExitTrigger__Class>(type_info, "", "SeinEnterExitTrigger");
        }
        inline app::SeinEnterExitTrigger* create() {
            return il2cpp::create_object<app::SeinEnterExitTrigger>(get_class());
        }
    } // namespace SeinEnterExitTrigger
} // namespace app::classes::types
