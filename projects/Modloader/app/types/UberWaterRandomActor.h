#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterRandomActor {
        namespace {
            inline app::UberWaterRandomActor__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterRandomActor__Class** type_info = &type_info_ref;
        inline app::UberWaterRandomActor__Class* get_class() {
            return il2cpp::get_class<app::UberWaterRandomActor__Class>(type_info, "", "UberWaterRandomActor");
        }
        inline app::UberWaterRandomActor* create() {
            return il2cpp::create_object<app::UberWaterRandomActor>(get_class());
        }
    } // namespace UberWaterRandomActor
} // namespace app::classes::types
