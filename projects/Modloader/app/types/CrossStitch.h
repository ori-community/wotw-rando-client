#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrossStitch__Class.h>
#include <Modloader/app/structs/CrossStitch.h>

namespace app::classes::types {
    namespace CrossStitch {
        namespace {
            inline app::CrossStitch__Class* type_info_ref = nullptr;
        }
        inline app::CrossStitch__Class** type_info = &type_info_ref;
        inline app::CrossStitch__Class* get_class() {
            return il2cpp::get_class<app::CrossStitch__Class>(type_info, "Colorful", "CrossStitch");
        }
        inline app::CrossStitch* create() {
            return il2cpp::create_object<app::CrossStitch>(get_class());
        }
    } // namespace CrossStitch
} // namespace app::classes::types
