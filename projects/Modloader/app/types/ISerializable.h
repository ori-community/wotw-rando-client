#pragma once
#include <Modloader/app/structs/ISerializable.h>
#include <Modloader/app/structs/ISerializable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISerializable {
        inline app::ISerializable__Class** type_info() {
            static app::ISerializable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISerializable__Class**)(modloader::win::memory::resolve_rva(0x0475A608));
            }
            return cache;
        }
        inline app::ISerializable__Class* get_class() {
            return il2cpp::get_class<app::ISerializable__Class>(type_info(), "System.Runtime.Serialization", "ISerializable");
        }
    } // namespace ISerializable
} // namespace app::classes::types
