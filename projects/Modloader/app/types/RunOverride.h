#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RunOverride__Class.h>
#include <Modloader/app/structs/RunOverride.h>

namespace app::classes::types {
    namespace RunOverride {
        namespace {
            inline app::RunOverride__Class* type_info_ref = nullptr;
        }
        inline app::RunOverride__Class** type_info = &type_info_ref;
        inline app::RunOverride__Class* get_class() {
            return il2cpp::get_class<app::RunOverride__Class>(type_info, "", "RunOverride");
        }
        inline app::RunOverride* create() {
            return il2cpp::create_object<app::RunOverride>(get_class());
        }
    } // namespace RunOverride
} // namespace app::classes::types
