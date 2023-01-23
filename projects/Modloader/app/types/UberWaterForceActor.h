#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberWaterForceActor__Class.h>
#include <Modloader/app/structs/UberWaterForceActor.h>

namespace app::classes::types {
    namespace UberWaterForceActor {
        namespace {
            inline app::UberWaterForceActor__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterForceActor__Class** type_info = &type_info_ref;
        inline app::UberWaterForceActor__Class* get_class() {
            return il2cpp::get_class<app::UberWaterForceActor__Class>(type_info, "", "UberWaterForceActor");
        }
        inline app::UberWaterForceActor* create() {
            return il2cpp::create_object<app::UberWaterForceActor>(get_class());
        }
    } // namespace UberWaterForceActor
} // namespace app::classes::types
