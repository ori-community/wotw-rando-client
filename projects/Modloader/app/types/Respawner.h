#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Respawner__Class.h>
#include <Modloader/app/structs/Respawner.h>

namespace app::classes::types {
    namespace Respawner {
        namespace {
            inline app::Respawner__Class* type_info_ref = nullptr;
        }
        inline app::Respawner__Class** type_info = &type_info_ref;
        inline app::Respawner__Class* get_class() {
            return il2cpp::get_class<app::Respawner__Class>(type_info, "", "Respawner");
        }
        inline app::Respawner* create() {
            return il2cpp::create_object<app::Respawner>(get_class());
        }
    } // namespace Respawner
} // namespace app::classes::types
