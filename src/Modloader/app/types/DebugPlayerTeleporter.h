#pragma once
#include <Modloader/app/structs/DebugPlayerTeleporter.h>
#include <Modloader/app/structs/DebugPlayerTeleporter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugPlayerTeleporter {
        inline app::DebugPlayerTeleporter__Class** type_info() {
            static app::DebugPlayerTeleporter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugPlayerTeleporter__Class**)(modloader::win::memory::resolve_rva(0x0474A4A0));
            }
            return cache;
        }
        inline app::DebugPlayerTeleporter__Class* get_class() {
            return il2cpp::get_class<app::DebugPlayerTeleporter__Class>(type_info(), "", "DebugPlayerTeleporter");
        }
        inline app::DebugPlayerTeleporter* create() {
            return il2cpp::create_object<app::DebugPlayerTeleporter>(get_class());
        }
    } // namespace DebugPlayerTeleporter
} // namespace app::classes::types
