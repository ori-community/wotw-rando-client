#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PoleSetupData__Array__Class.h>
#include <Modloader/app/structs/PoleSetupData__Array.h>

namespace app::classes::types {
    namespace PoleSetupData__Array {
        namespace {
            inline app::PoleSetupData__Array__Class* type_info_ref = nullptr;
        }
        inline app::PoleSetupData__Array__Class** type_info = &type_info_ref;
        inline app::PoleSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::PoleSetupData__Array__Class>(type_info, "Game", "PoleSetupData[]");
        }
        inline app::PoleSetupData__Array* create() {
            return il2cpp::create_object<app::PoleSetupData__Array>(get_class());
        }
    } // namespace PoleSetupData__Array
} // namespace app::classes::types
