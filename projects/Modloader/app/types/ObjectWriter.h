#pragma once
#include <Modloader/app/structs/ObjectWriter.h>
#include <Modloader/app/structs/ObjectWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectWriter {
        inline app::ObjectWriter__Class** type_info() {
            static app::ObjectWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectWriter__Class**)(modloader::win::memory::resolve_rva(0x04720FC8));
            }
            return cache;
        }
        inline app::ObjectWriter__Class* get_class() {
            return il2cpp::get_class<app::ObjectWriter__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "ObjectWriter");
        }
        inline app::ObjectWriter* create() {
            return il2cpp::create_object<app::ObjectWriter>(get_class());
        }
    } // namespace ObjectWriter
} // namespace app::classes::types
