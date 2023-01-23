#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TesterPlugin__Class.h>
#include <Modloader/app/structs/TesterPlugin.h>

namespace app::classes::types {
    namespace TesterPlugin {
        namespace {
            inline app::TesterPlugin__Class* type_info_ref = nullptr;
        }
        inline app::TesterPlugin__Class** type_info = &type_info_ref;
        inline app::TesterPlugin__Class* get_class() {
            return il2cpp::get_class<app::TesterPlugin__Class>(type_info, "", "TesterPlugin");
        }
        inline app::TesterPlugin* create() {
            return il2cpp::create_object<app::TesterPlugin>(get_class());
        }
    } // namespace TesterPlugin
} // namespace app::classes::types
