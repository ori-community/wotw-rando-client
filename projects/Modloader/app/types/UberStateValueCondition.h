#pragma once
#include <Modloader/app/structs/UberStateValueCondition.h>
#include <Modloader/app/structs/UberStateValueCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateValueCondition {
        inline app::UberStateValueCondition__Class** type_info() {
            static app::UberStateValueCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateValueCondition__Class**)(modloader::win::memory::resolve_rva(0x0471C4A0));
            }
            return cache;
        }
        inline app::UberStateValueCondition__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueCondition__Class>(type_info(), "", "UberStateValueCondition");
        }
        inline app::UberStateValueCondition* create() {
            return il2cpp::create_object<app::UberStateValueCondition>(get_class());
        }
    } // namespace UberStateValueCondition
} // namespace app::classes::types
