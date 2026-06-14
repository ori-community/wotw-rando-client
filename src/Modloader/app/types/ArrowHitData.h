#pragma once
#include <Modloader/app/structs/ArrowHitData.h>
#include <Modloader/app/structs/ArrowHitData__Boxed.h>
#include <Modloader/app/structs/ArrowHitData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArrowHitData {
        inline app::ArrowHitData__Class** type_info() {
            static app::ArrowHitData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArrowHitData__Class**)(modloader::win::memory::resolve_rva(0x04779408));
            }
            return cache;
        }
        inline app::ArrowHitData__Class* get_class() {
            return il2cpp::get_class<app::ArrowHitData__Class>(type_info(), "", "ArrowHitData");
        }
        inline app::ArrowHitData* create() {
            return il2cpp::create_object<app::ArrowHitData>(get_class());
        }
        inline app::ArrowHitData__Boxed* box(app::ArrowHitData value) {
            return il2cpp::box_value<app::ArrowHitData__Boxed>(get_class(), value);
        }
    } // namespace ArrowHitData
} // namespace app::classes::types
