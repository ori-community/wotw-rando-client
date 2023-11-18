#pragma once
#include <Modloader/app/structs/BinaryMethodCall.h>
#include <Modloader/app/structs/BinaryMethodCall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryMethodCall {
        inline app::BinaryMethodCall__Class** type_info() {
            static app::BinaryMethodCall__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryMethodCall__Class**)(modloader::win::memory::resolve_rva(0x04787058));
            }
            return cache;
        }
        inline app::BinaryMethodCall__Class* get_class() {
            return il2cpp::get_class<app::BinaryMethodCall__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodCall");
        }
        inline app::BinaryMethodCall* create() {
            return il2cpp::create_object<app::BinaryMethodCall>(get_class());
        }
    } // namespace BinaryMethodCall
} // namespace app::classes::types
