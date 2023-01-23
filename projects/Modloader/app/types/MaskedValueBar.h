#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaskedValueBar__Class.h>
#include <Modloader/app/structs/MaskedValueBar.h>

namespace app::classes::types {
    namespace MaskedValueBar {
        namespace {
            inline app::MaskedValueBar__Class* type_info_ref = nullptr;
        }
        inline app::MaskedValueBar__Class** type_info = &type_info_ref;
        inline app::MaskedValueBar__Class* get_class() {
            return il2cpp::get_class<app::MaskedValueBar__Class>(type_info, "", "MaskedValueBar");
        }
        inline app::MaskedValueBar* create() {
            return il2cpp::create_object<app::MaskedValueBar>(get_class());
        }
    } // namespace MaskedValueBar
} // namespace app::classes::types
