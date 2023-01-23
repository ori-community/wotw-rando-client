#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeashHookLogic_c__Class.h>
#include <Modloader/app/structs/LeashHookLogic_c.h>

namespace app::classes::types {
    namespace LeashHookLogic_c {
        inline app::LeashHookLogic_c__Class** type_info = (app::LeashHookLogic_c__Class**)(modloader::win::memory::resolve_rva(0x0475F688));
        inline app::LeashHookLogic_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeashHookLogic_c__Class>(type_info, "", "LeashHookLogic", "<>c");
        }
        inline app::LeashHookLogic_c* create() {
            return il2cpp::create_object<app::LeashHookLogic_c>(get_class());
        }
    } // namespace LeashHookLogic_c
} // namespace app::classes::types
