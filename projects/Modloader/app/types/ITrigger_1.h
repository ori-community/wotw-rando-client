#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITrigger_1 {
        namespace {
            inline app::ITrigger_1__Class* type_info_ref = nullptr;
        }
        inline app::ITrigger_1__Class** type_info = &type_info_ref;
        inline app::ITrigger_1__Class* get_class() {
            return il2cpp::get_class<app::ITrigger_1__Class>(type_info, "fsm", "ITrigger");
        }
    } // namespace ITrigger_1
} // namespace app::classes::types
