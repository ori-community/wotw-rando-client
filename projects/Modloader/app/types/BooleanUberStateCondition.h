#pragma once
#include <Modloader/app/structs/BooleanUberStateCondition.h>
#include <Modloader/app/structs/BooleanUberStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BooleanUberStateCondition {
        inline app::BooleanUberStateCondition__Class** type_info() {
            static app::BooleanUberStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BooleanUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x047770F8));
            }
            return cache;
        }
        inline app::BooleanUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberStateCondition__Class>(type_info(), "", "BooleanUberStateCondition");
        }
        inline app::BooleanUberStateCondition* create() {
            return il2cpp::create_object<app::BooleanUberStateCondition>(get_class());
        }
    } // namespace BooleanUberStateCondition
} // namespace app::classes::types
