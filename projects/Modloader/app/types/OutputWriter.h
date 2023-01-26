#pragma once
#include <Modloader/app/structs/OutputWriter.h>
#include <Modloader/app/structs/OutputWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OutputWriter {
        inline app::OutputWriter__Class** type_info() {
            static app::OutputWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OutputWriter__Class**)(modloader::win::memory::resolve_rva(0x04774560));
            }
            return cache;
        }
        inline app::OutputWriter__Class* get_class() {
            return il2cpp::get_class<app::OutputWriter__Class>(type_info(), "", "OutputWriter");
        }
        inline app::OutputWriter* create() {
            return il2cpp::create_object<app::OutputWriter>(get_class());
        }
    } // namespace OutputWriter
} // namespace app::classes::types
