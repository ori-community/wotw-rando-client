#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Scrollbar__Class.h>
#include <Modloader/app/structs/Scrollbar.h>

namespace app::classes::types {
    namespace Scrollbar {
        namespace {
            inline app::Scrollbar__Class* type_info_ref = nullptr;
        }
        inline app::Scrollbar__Class** type_info = &type_info_ref;
        inline app::Scrollbar__Class* get_class() {
            return il2cpp::get_class<app::Scrollbar__Class>(type_info, "UnityEngine.UI", "Scrollbar");
        }
        inline app::Scrollbar* create() {
            return il2cpp::create_object<app::Scrollbar>(get_class());
        }
    } // namespace Scrollbar
} // namespace app::classes::types
