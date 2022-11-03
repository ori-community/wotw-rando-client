#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateConditionHelper_c {
        inline app::UberStateConditionHelper_c__Class** type_info = (app::UberStateConditionHelper_c__Class**)(modloader::win::memory::resolve_rva(0x04729C18));
        inline app::UberStateConditionHelper_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateConditionHelper_c__Class>(type_info, "", "UberStateConditionHelper", "<>c");
        }
        inline app::UberStateConditionHelper_c* create() {
            return il2cpp::create_object<app::UberStateConditionHelper_c>(get_class());
        }
    } // namespace UberStateConditionHelper_c
} // namespace app::classes::types
