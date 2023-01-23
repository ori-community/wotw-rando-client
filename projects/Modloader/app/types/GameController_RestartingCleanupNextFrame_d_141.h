#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameController_RestartingCleanupNextFrame_d_141__Class.h>
#include <Modloader/app/structs/GameController_RestartingCleanupNextFrame_d_141.h>

namespace app::classes::types {
    namespace GameController_RestartingCleanupNextFrame_d_141 {
        inline app::GameController_RestartingCleanupNextFrame_d_141__Class** type_info = (app::GameController_RestartingCleanupNextFrame_d_141__Class**)(modloader::win::memory::resolve_rva(0x0475A2A0));
        inline app::GameController_RestartingCleanupNextFrame_d_141__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_RestartingCleanupNextFrame_d_141__Class>(type_info, "", "GameController", "<RestartingCleanupNextFrame>d__141");
        }
        inline app::GameController_RestartingCleanupNextFrame_d_141* create() {
            return il2cpp::create_object<app::GameController_RestartingCleanupNextFrame_d_141>(get_class());
        }
    } // namespace GameController_RestartingCleanupNextFrame_d_141
} // namespace app::classes::types
