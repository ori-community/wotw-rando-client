#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonSwarm__Class.h>
#include <Modloader/app/structs/MoonSwarm.h>

namespace app::classes::types {
    namespace MoonSwarm {
        namespace {
            inline app::MoonSwarm__Class* type_info_ref = nullptr;
        }
        inline app::MoonSwarm__Class** type_info = &type_info_ref;
        inline app::MoonSwarm__Class* get_class() {
            return il2cpp::get_class<app::MoonSwarm__Class>(type_info, "", "MoonSwarm");
        }
        inline app::MoonSwarm* create() {
            return il2cpp::create_object<app::MoonSwarm>(get_class());
        }
    } // namespace MoonSwarm
} // namespace app::classes::types
