#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PositionCheckerPlugin__Class.h>
#include <Modloader/app/structs/PositionCheckerPlugin.h>

namespace app::classes::types {
    namespace PositionCheckerPlugin {
        namespace {
            inline app::PositionCheckerPlugin__Class* type_info_ref = nullptr;
        }
        inline app::PositionCheckerPlugin__Class** type_info = &type_info_ref;
        inline app::PositionCheckerPlugin__Class* get_class() {
            return il2cpp::get_class<app::PositionCheckerPlugin__Class>(type_info, "", "PositionCheckerPlugin");
        }
        inline app::PositionCheckerPlugin* create() {
            return il2cpp::create_object<app::PositionCheckerPlugin>(get_class());
        }
    } // namespace PositionCheckerPlugin
} // namespace app::classes::types
