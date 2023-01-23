#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MechSpiderLeg__Class.h>
#include <Modloader/app/structs/MechSpiderLeg.h>
#include <Modloader/app/structs/MechSpiderLeg__Array.h>

namespace app::classes::types {
    namespace MechSpiderLeg {
        namespace {
            inline app::MechSpiderLeg__Class* type_info_ref = nullptr;
        }
        inline app::MechSpiderLeg__Class** type_info = &type_info_ref;
        inline app::MechSpiderLeg__Class* get_class() {
            return il2cpp::get_class<app::MechSpiderLeg__Class>(type_info, "RootMotion.Demos", "MechSpiderLeg");
        }
        inline app::MechSpiderLeg* create() {
            return il2cpp::create_object<app::MechSpiderLeg>(get_class());
        }
        inline app::MechSpiderLeg__Array* create_array(int size) {
            return il2cpp::array_new<app::MechSpiderLeg__Array>(get_class(), size);
        }
        inline app::MechSpiderLeg__Array* create_array(const std::vector<app::MechSpiderLeg*>& items) {
            return il2cpp::array_new<app::MechSpiderLeg__Array>(get_class(), items);
        }
    } // namespace MechSpiderLeg
} // namespace app::classes::types
