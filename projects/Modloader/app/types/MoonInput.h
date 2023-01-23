#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonInput__Class.h>
#include <Modloader/app/structs/MoonInput.h>

namespace app::classes::types {
    namespace MoonInput {
        namespace {
            inline app::MoonInput__Class* type_info_ref = nullptr;
        }
        inline app::MoonInput__Class** type_info = &type_info_ref;
        inline app::MoonInput__Class* get_class() {
            return il2cpp::get_class<app::MoonInput__Class>(type_info, "", "MoonInput");
        }
        inline app::MoonInput* create() {
            return il2cpp::create_object<app::MoonInput>(get_class());
        }
    } // namespace MoonInput
} // namespace app::classes::types
