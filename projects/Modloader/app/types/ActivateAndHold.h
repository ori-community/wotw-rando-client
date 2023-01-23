#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivateAndHold__Class.h>
#include <Modloader/app/structs/ActivateAndHold.h>

namespace app::classes::types {
    namespace ActivateAndHold {
        namespace {
            inline app::ActivateAndHold__Class* type_info_ref = nullptr;
        }
        inline app::ActivateAndHold__Class** type_info = &type_info_ref;
        inline app::ActivateAndHold__Class* get_class() {
            return il2cpp::get_class<app::ActivateAndHold__Class>(type_info, "", "ActivateAndHold");
        }
        inline app::ActivateAndHold* create() {
            return il2cpp::create_object<app::ActivateAndHold>(get_class());
        }
    } // namespace ActivateAndHold
} // namespace app::classes::types
