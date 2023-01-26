#pragma once
#include <Modloader/app/structs/SceneFrameworkDebugger.h>
#include <Modloader/app/structs/SceneFrameworkDebugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneFrameworkDebugger {
        inline app::SceneFrameworkDebugger__Class** type_info() {
            static app::SceneFrameworkDebugger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneFrameworkDebugger__Class**)(modloader::win::memory::resolve_rva(0x0476C368));
            }
            return cache;
        }
        inline app::SceneFrameworkDebugger__Class* get_class() {
            return il2cpp::get_class<app::SceneFrameworkDebugger__Class>(type_info(), "", "SceneFrameworkDebugger");
        }
        inline app::SceneFrameworkDebugger* create() {
            return il2cpp::create_object<app::SceneFrameworkDebugger>(get_class());
        }
    } // namespace SceneFrameworkDebugger
} // namespace app::classes::types
