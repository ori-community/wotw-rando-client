#pragma once
#include <Modloader/app/structs/CatAndMouseKuroLandZone__Array.h>
#include <Modloader/app/structs/CatAndMouseKuroLandZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatAndMouseKuroLandZone__Array {
        inline app::CatAndMouseKuroLandZone__Array__Class** type_info() {
            static app::CatAndMouseKuroLandZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatAndMouseKuroLandZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatAndMouseKuroLandZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseKuroLandZone__Array__Class>(type_info(), "", "CatAndMouseKuroLandZone[]");
        }
        inline app::CatAndMouseKuroLandZone__Array* create() {
            return il2cpp::create_object<app::CatAndMouseKuroLandZone__Array>(get_class());
        }
    } // namespace CatAndMouseKuroLandZone__Array
} // namespace app::classes::types
