#pragma once
#include <Modloader/app/structs/IDeserializationCallback.h>
#include <Modloader/app/structs/IDeserializationCallback__Array.h>
#include <Modloader/app/structs/IDeserializationCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDeserializationCallback {
        inline app::IDeserializationCallback__Class** type_info() {
            static app::IDeserializationCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDeserializationCallback__Class**)(modloader::win::memory::resolve_rva(0x047733B0));
            }
            return cache;
        }
        inline app::IDeserializationCallback__Class* get_class() {
            return il2cpp::get_class<app::IDeserializationCallback__Class>(type_info(), "System.Runtime.Serialization", "IDeserializationCallback");
        }
        inline app::IDeserializationCallback__Array* create_array(int size) {
            return il2cpp::array_new<app::IDeserializationCallback__Array>(get_class(), size);
        }
        inline app::IDeserializationCallback__Array* create_array(const std::vector<app::IDeserializationCallback*>& items) {
            return il2cpp::array_new<app::IDeserializationCallback__Array>(get_class(), items);
        }
    } // namespace IDeserializationCallback
} // namespace app::classes::types
