#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InWaterBrain__Class.h>
#include <Modloader/app/structs/InWaterBrain.h>

namespace app::classes::types {
    namespace InWaterBrain {
        namespace {
            inline app::InWaterBrain__Class* type_info_ref = nullptr;
        }
        inline app::InWaterBrain__Class** type_info = &type_info_ref;
        inline app::InWaterBrain__Class* get_class() {
            return il2cpp::get_class<app::InWaterBrain__Class>(type_info, "", "InWaterBrain");
        }
        inline app::InWaterBrain* create() {
            return il2cpp::create_object<app::InWaterBrain>(get_class());
        }
    } // namespace InWaterBrain
} // namespace app::classes::types
