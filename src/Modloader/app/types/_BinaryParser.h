#pragma once
#include <Modloader/app/structs/_BinaryParser.h>
#include <Modloader/app/structs/_BinaryParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _BinaryParser {
        inline app::_BinaryParser__Class** type_info() {
            static app::_BinaryParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::_BinaryParser__Class**)(modloader::win::memory::resolve_rva(0x0475B9A0));
            }
            return cache;
        }
        inline app::_BinaryParser__Class* get_class() {
            return il2cpp::get_class<app::_BinaryParser__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "__BinaryParser");
        }
        inline app::_BinaryParser* create() {
            return il2cpp::create_object<app::_BinaryParser>(get_class());
        }
    } // namespace _BinaryParser
} // namespace app::classes::types
