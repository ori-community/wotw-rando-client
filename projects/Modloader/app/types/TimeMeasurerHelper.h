#pragma once
#include <Modloader/app/structs/TimeMeasurerHelper.h>
#include <Modloader/app/structs/TimeMeasurerHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeMeasurerHelper {
        inline app::TimeMeasurerHelper__Class** type_info() {
            static app::TimeMeasurerHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeMeasurerHelper__Class**)(modloader::win::memory::resolve_rva(0x04722880));
            }
            return cache;
        }
        inline app::TimeMeasurerHelper__Class* get_class() {
            return il2cpp::get_class<app::TimeMeasurerHelper__Class>(type_info(), "", "TimeMeasurerHelper");
        }
        inline app::TimeMeasurerHelper* create() {
            return il2cpp::create_object<app::TimeMeasurerHelper>(get_class());
        }
    } // namespace TimeMeasurerHelper
} // namespace app::classes::types
