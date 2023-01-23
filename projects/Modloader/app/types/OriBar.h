#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OriBar__Class.h>
#include <Modloader/app/structs/OriBar.h>

namespace app::classes::types {
    namespace OriBar {
        namespace {
            inline app::OriBar__Class* type_info_ref = nullptr;
        }
        inline app::OriBar__Class** type_info = &type_info_ref;
        inline app::OriBar__Class* get_class() {
            return il2cpp::get_class<app::OriBar__Class>(type_info, "", "OriBar");
        }
        inline app::OriBar* create() {
            return il2cpp::create_object<app::OriBar>(get_class());
        }
    } // namespace OriBar
} // namespace app::classes::types
