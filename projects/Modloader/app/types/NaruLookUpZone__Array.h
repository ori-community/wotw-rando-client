#pragma once
#include <Modloader/app/structs/NaruLookUpZone__Array.h>
#include <Modloader/app/structs/NaruLookUpZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NaruLookUpZone__Array {
        inline app::NaruLookUpZone__Array__Class** type_info() {
            static app::NaruLookUpZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NaruLookUpZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NaruLookUpZone__Array__Class* get_class() {
            return il2cpp::get_class<app::NaruLookUpZone__Array__Class>(type_info(), "", "NaruLookUpZone[]");
        }
        inline app::NaruLookUpZone__Array* create() {
            return il2cpp::create_object<app::NaruLookUpZone__Array>(get_class());
        }
    } // namespace NaruLookUpZone__Array
} // namespace app::classes::types
