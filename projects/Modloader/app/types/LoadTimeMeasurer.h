#pragma once
#include <Modloader/app/structs/LoadTimeMeasurer.h>
#include <Modloader/app/structs/LoadTimeMeasurer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadTimeMeasurer {
        inline app::LoadTimeMeasurer__Class** type_info() {
            static app::LoadTimeMeasurer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadTimeMeasurer__Class**)(modloader::win::memory::resolve_rva(0x0474CE70));
            }
            return cache;
        }
        inline app::LoadTimeMeasurer__Class* get_class() {
            return il2cpp::get_class<app::LoadTimeMeasurer__Class>(type_info(), "", "LoadTimeMeasurer");
        }
        inline app::LoadTimeMeasurer* create() {
            return il2cpp::create_object<app::LoadTimeMeasurer>(get_class());
        }
    } // namespace LoadTimeMeasurer
} // namespace app::classes::types
