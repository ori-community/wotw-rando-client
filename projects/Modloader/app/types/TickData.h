#pragma once
#include <Modloader/app/structs/TickData.h>
#include <Modloader/app/structs/TickData__Boxed.h>
#include <Modloader/app/structs/TickData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TickData {
        inline app::TickData__Class** type_info() {
            static app::TickData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TickData__Class**)(modloader::win::memory::resolve_rva(0x04701630));
            }
            return cache;
        }
        inline app::TickData__Class* get_class() {
            return il2cpp::get_class<app::TickData__Class>(type_info(), "UberBehaviourTree", "TickData");
        }
        inline app::TickData* create() {
            return il2cpp::create_object<app::TickData>(get_class());
        }
        inline app::TickData__Boxed* box(app::TickData value) {
            return il2cpp::box_value<app::TickData__Boxed>(get_class(), value);
        }
    } // namespace TickData
} // namespace app::classes::types
