#pragma once
#include <Modloader/app/structs/OutputWindow.h>
#include <Modloader/app/structs/OutputWindow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OutputWindow {
        inline app::OutputWindow__Class** type_info() {
            static app::OutputWindow__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OutputWindow__Class**)(modloader::win::memory::resolve_rva(0x0475E4D0));
            }
            return cache;
        }
        inline app::OutputWindow__Class* get_class() {
            return il2cpp::get_class<app::OutputWindow__Class>(type_info(), "Unity.IO.Compression", "OutputWindow");
        }
        inline app::OutputWindow* create() {
            return il2cpp::create_object<app::OutputWindow>(get_class());
        }
    } // namespace OutputWindow
} // namespace app::classes::types
