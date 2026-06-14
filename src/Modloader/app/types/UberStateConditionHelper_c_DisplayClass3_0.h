#pragma once
#include <Modloader/app/structs/UberStateConditionHelper_c_DisplayClass3_0.h>
#include <Modloader/app/structs/UberStateConditionHelper_c_DisplayClass3_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateConditionHelper_c_DisplayClass3_0 {
        inline app::UberStateConditionHelper_c_DisplayClass3_0__Class** type_info() {
            static app::UberStateConditionHelper_c_DisplayClass3_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateConditionHelper_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x04737DD8));
            }
            return cache;
        }
        inline app::UberStateConditionHelper_c_DisplayClass3_0__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateConditionHelper_c_DisplayClass3_0__Class>(type_info(), "", "UberStateConditionHelper", "<>c__DisplayClass3_0");
        }
        inline app::UberStateConditionHelper_c_DisplayClass3_0* create() {
            return il2cpp::create_object<app::UberStateConditionHelper_c_DisplayClass3_0>(get_class());
        }
    } // namespace UberStateConditionHelper_c_DisplayClass3_0
} // namespace app::classes::types
