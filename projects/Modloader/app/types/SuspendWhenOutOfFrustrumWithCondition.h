#pragma once
#include <Modloader/app/structs/SuspendWhenOutOfFrustrumWithCondition.h>
#include <Modloader/app/structs/SuspendWhenOutOfFrustrumWithCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SuspendWhenOutOfFrustrumWithCondition {
        inline app::SuspendWhenOutOfFrustrumWithCondition__Class** type_info() {
            static app::SuspendWhenOutOfFrustrumWithCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SuspendWhenOutOfFrustrumWithCondition__Class**)(modloader::win::memory::resolve_rva(0x0477FBC0));
            }
            return cache;
        }
        inline app::SuspendWhenOutOfFrustrumWithCondition__Class* get_class() {
            return il2cpp::get_class<app::SuspendWhenOutOfFrustrumWithCondition__Class>(type_info(), "", "SuspendWhenOutOfFrustrumWithCondition");
        }
        inline app::SuspendWhenOutOfFrustrumWithCondition* create() {
            return il2cpp::create_object<app::SuspendWhenOutOfFrustrumWithCondition>(get_class());
        }
    } // namespace SuspendWhenOutOfFrustrumWithCondition
} // namespace app::classes::types
