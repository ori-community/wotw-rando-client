#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InterlockedGate__Class.h>
#include <Modloader/app/structs/InterlockedGate.h>
#include <Modloader/app/structs/InterlockedGate__Boxed.h>

namespace app::classes::types {
    namespace InterlockedGate {
        namespace {
            inline app::InterlockedGate__Class* type_info_ref = nullptr;
        }
        inline app::InterlockedGate__Class** type_info = &type_info_ref;
        inline app::InterlockedGate__Class* get_class() {
            return il2cpp::get_class<app::InterlockedGate__Class>(type_info, "System.Net", "InterlockedGate");
        }
        inline app::InterlockedGate* create() {
            return il2cpp::create_object<app::InterlockedGate>(get_class());
        }
        inline app::InterlockedGate__Boxed* box(app::InterlockedGate value) {
            return il2cpp::box_value<app::InterlockedGate__Boxed>(get_class(), value);
        }
    } // namespace InterlockedGate
} // namespace app::classes::types
