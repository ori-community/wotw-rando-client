#pragma once
#include <Modloader/app/structs/IntUberStateCondition.h>
#include <Modloader/app/structs/IntUberStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntUberStateCondition {
        inline app::IntUberStateCondition__Class** type_info() {
            static app::IntUberStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IntUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x04744C68));
            }
            return cache;
        }
        inline app::IntUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::IntUberStateCondition__Class>(type_info(), "", "IntUberStateCondition");
        }
        inline app::IntUberStateCondition* create() {
            return il2cpp::create_object<app::IntUberStateCondition>(get_class());
        }
    } // namespace IntUberStateCondition
} // namespace app::classes::types
