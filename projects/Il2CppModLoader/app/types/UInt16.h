#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UInt16 {
        inline app::UInt16__Class** type_info = (app::UInt16__Class**)(modloader::win::memory::resolve_rva(0x04728F80));
        inline app::UInt16__Class* get_class() {
            return il2cpp::get_class<app::UInt16__Class>(type_info, "System", "UInt16");
        }
        inline app::UInt16* create() {
            return il2cpp::create_object<app::UInt16>(get_class());
        }
        inline app::UInt16__Boxed* box(uint16_t value) {
            return il2cpp::box_value<app::UInt16__Boxed>(get_class(), value);
        }
        inline app::UInt16__Array* create_array(int size) {
            return il2cpp::array_new<app::UInt16__Array>(get_class(), size);
        }
        inline app::UInt16__Array* create_array(const std::vector<uint16_t>& items) {
            return il2cpp::array_new<app::UInt16__Array>(get_class(), items);
        }
    } // namespace UInt16
} // namespace app::classes::types
