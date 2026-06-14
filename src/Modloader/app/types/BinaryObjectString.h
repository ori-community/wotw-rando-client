#pragma once
#include <Modloader/app/structs/BinaryObjectString.h>
#include <Modloader/app/structs/BinaryObjectString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryObjectString {
        inline app::BinaryObjectString__Class** type_info() {
            static app::BinaryObjectString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryObjectString__Class**)(modloader::win::memory::resolve_rva(0x047601E8));
            }
            return cache;
        }
        inline app::BinaryObjectString__Class* get_class() {
            return il2cpp::get_class<app::BinaryObjectString__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectString");
        }
        inline app::BinaryObjectString* create() {
            return il2cpp::create_object<app::BinaryObjectString>(get_class());
        }
    } // namespace BinaryObjectString
} // namespace app::classes::types
