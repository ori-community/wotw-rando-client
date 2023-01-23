#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CatAndMouseKuroLandZone__Class.h>
#include <Modloader/app/structs/CatAndMouseKuroLandZone.h>
#include <Modloader/app/structs/CatAndMouseKuroLandZone__Array.h>

namespace app::classes::types {
    namespace CatAndMouseKuroLandZone {
        namespace {
            inline app::CatAndMouseKuroLandZone__Class* type_info_ref = nullptr;
        }
        inline app::CatAndMouseKuroLandZone__Class** type_info = &type_info_ref;
        inline app::CatAndMouseKuroLandZone__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseKuroLandZone__Class>(type_info, "", "CatAndMouseKuroLandZone");
        }
        inline app::CatAndMouseKuroLandZone* create() {
            return il2cpp::create_object<app::CatAndMouseKuroLandZone>(get_class());
        }
        inline app::CatAndMouseKuroLandZone__Array* create_array(int size) {
            return il2cpp::array_new<app::CatAndMouseKuroLandZone__Array>(get_class(), size);
        }
        inline app::CatAndMouseKuroLandZone__Array* create_array(const std::vector<app::CatAndMouseKuroLandZone*>& items) {
            return il2cpp::array_new<app::CatAndMouseKuroLandZone__Array>(get_class(), items);
        }
    } // namespace CatAndMouseKuroLandZone
} // namespace app::classes::types
