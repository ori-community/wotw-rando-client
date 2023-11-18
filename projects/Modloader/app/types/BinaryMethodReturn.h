#pragma once
#include <Modloader/app/structs/BinaryMethodReturn.h>
#include <Modloader/app/structs/BinaryMethodReturn__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryMethodReturn {
        inline app::BinaryMethodReturn__Class** type_info() {
            static app::BinaryMethodReturn__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryMethodReturn__Class**)(modloader::win::memory::resolve_rva(0x047282C0));
            }
            return cache;
        }
        inline app::BinaryMethodReturn__Class* get_class() {
            return il2cpp::get_class<app::BinaryMethodReturn__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodReturn");
        }
        inline app::BinaryMethodReturn* create() {
            return il2cpp::create_object<app::BinaryMethodReturn>(get_class());
        }
    } // namespace BinaryMethodReturn
} // namespace app::classes::types
