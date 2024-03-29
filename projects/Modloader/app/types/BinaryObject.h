#pragma once
#include <Modloader/app/structs/BinaryObject.h>
#include <Modloader/app/structs/BinaryObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryObject {
        inline app::BinaryObject__Class** type_info() {
            static app::BinaryObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryObject__Class**)(modloader::win::memory::resolve_rva(0x0475CB90));
            }
            return cache;
        }
        inline app::BinaryObject__Class* get_class() {
            return il2cpp::get_class<app::BinaryObject__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryObject");
        }
        inline app::BinaryObject* create() {
            return il2cpp::create_object<app::BinaryObject>(get_class());
        }
    } // namespace BinaryObject
} // namespace app::classes::types
