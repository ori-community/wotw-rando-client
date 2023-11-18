#pragma once
#include <Modloader/app/structs/TimeData.h>
#include <Modloader/app/structs/TimeData__Boxed.h>
#include <Modloader/app/structs/TimeData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeData {
        inline app::TimeData__Class** type_info() {
            static app::TimeData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeData__Class**)(modloader::win::memory::resolve_rva(0x04709888));
            }
            return cache;
        }
        inline app::TimeData__Class* get_class() {
            return il2cpp::get_class<app::TimeData__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "TimeData");
        }
        inline app::TimeData* create() {
            return il2cpp::create_object<app::TimeData>(get_class());
        }
        inline app::TimeData__Boxed* box(app::TimeData value) {
            return il2cpp::box_value<app::TimeData__Boxed>(get_class(), value);
        }
    } // namespace TimeData
} // namespace app::classes::types
