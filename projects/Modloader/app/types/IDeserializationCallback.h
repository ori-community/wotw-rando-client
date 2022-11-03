#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDeserializationCallback {
        inline app::IDeserializationCallback__Class** type_info = (app::IDeserializationCallback__Class**)(modloader::win::memory::resolve_rva(0x047733B0));
        inline app::IDeserializationCallback__Class* get_class() {
            return il2cpp::get_class<app::IDeserializationCallback__Class>(type_info, "System.Runtime.Serialization", "IDeserializationCallback");
        }
        inline app::IDeserializationCallback__Array* create_array(int size) {
            return il2cpp::array_new<app::IDeserializationCallback__Array>(get_class(), size);
        }
        inline app::IDeserializationCallback__Array* create_array(const std::vector<app::IDeserializationCallback*>& items) {
            return il2cpp::array_new<app::IDeserializationCallback__Array>(get_class(), items);
        }
    } // namespace IDeserializationCallback
} // namespace app::classes::types
