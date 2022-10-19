#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SByte {
        inline app::SByte__Class** type_info = (app::SByte__Class**)(modloader::win::memory::resolve_rva(0x0471AFF8));
        inline app::SByte__Class* get_class() {
            return il2cpp::get_class<app::SByte__Class>(type_info, "System", "SByte");
        }
        inline app::SByte* create() {
            return il2cpp::create_object<app::SByte>(get_class());
        }
        inline app::SByte__Boxed* box(int8_t value) {
            return il2cpp::box_value<app::SByte__Boxed>(get_class(), value);
        }
        inline app::SByte__Array* create_array(int size) {
            return il2cpp::array_new<app::SByte__Array>(get_class(), size);
        }
        inline app::SByte__Array* create_array(const std::vector<int8_t>& items) {
            return il2cpp::array_new<app::SByte__Array>(get_class(), items);
        }
    } // namespace SByte
} // namespace app::classes::types
