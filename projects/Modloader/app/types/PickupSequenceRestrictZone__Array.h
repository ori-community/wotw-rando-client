#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PickupSequenceRestrictZone__Array__Class.h>
#include <Modloader/app/structs/PickupSequenceRestrictZone__Array.h>

namespace app::classes::types {
    namespace PickupSequenceRestrictZone__Array {
        namespace {
            inline app::PickupSequenceRestrictZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::PickupSequenceRestrictZone__Array__Class** type_info = &type_info_ref;
        inline app::PickupSequenceRestrictZone__Array__Class* get_class() {
            return il2cpp::get_class<app::PickupSequenceRestrictZone__Array__Class>(type_info, "", "PickupSequenceRestrictZone[]");
        }
        inline app::PickupSequenceRestrictZone__Array* create() {
            return il2cpp::create_object<app::PickupSequenceRestrictZone__Array>(get_class());
        }
    } // namespace PickupSequenceRestrictZone__Array
} // namespace app::classes::types
