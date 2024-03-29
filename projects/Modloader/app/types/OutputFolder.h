#pragma once
#include <Modloader/app/structs/OutputFolder.h>
#include <Modloader/app/structs/OutputFolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OutputFolder {
        inline app::OutputFolder__Class** type_info() {
            static app::OutputFolder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OutputFolder__Class**)(modloader::win::memory::resolve_rva(0x04748788));
            }
            return cache;
        }
        inline app::OutputFolder__Class* get_class() {
            return il2cpp::get_class<app::OutputFolder__Class>(type_info(), "Moon", "OutputFolder");
        }
        inline app::OutputFolder* create() {
            return il2cpp::create_object<app::OutputFolder>(get_class());
        }
    } // namespace OutputFolder
} // namespace app::classes::types
