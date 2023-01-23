#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/License__Class.h>
#include <Modloader/app/structs/License.h>

namespace app::classes::types {
    namespace License {
        namespace {
            inline app::License__Class* type_info_ref = nullptr;
        }
        inline app::License__Class** type_info = &type_info_ref;
        inline app::License__Class* get_class() {
            return il2cpp::get_class<app::License__Class>(type_info, "System.ComponentModel", "License");
        }
        inline app::License* create() {
            return il2cpp::create_object<app::License>(get_class());
        }
    } // namespace License
} // namespace app::classes::types
