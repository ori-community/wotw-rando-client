#pragma once
#include <Modloader/app/structs/_BinaryWriter.h>
#include <Modloader/app/structs/_BinaryWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _BinaryWriter {
        inline app::_BinaryWriter__Class** type_info() {
            static app::_BinaryWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::_BinaryWriter__Class**)(modloader::win::memory::resolve_rva(0x04760868));
            }
            return cache;
        }
        inline app::_BinaryWriter__Class* get_class() {
            return il2cpp::get_class<app::_BinaryWriter__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter");
        }
        inline app::_BinaryWriter* create() {
            return il2cpp::create_object<app::_BinaryWriter>(get_class());
        }
    } // namespace _BinaryWriter
} // namespace app::classes::types
