#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Byte {
        inline app::Byte__Class** type_info = (app::Byte__Class**)(modloader::win::memory::resolve_rva(0x0477B890));
        inline app::Byte__Class* get_class() {
            return il2cpp::get_class<app::Byte__Class>(type_info, "System", "Byte");
        }
        inline app::Byte* create() {
            return il2cpp::create_object<app::Byte>(get_class());
        }
        inline app::Byte__Boxed* box(uint8_t value) {
            return il2cpp::box_value<app::Byte__Boxed>(get_class(), value);
        }
        inline app::Byte__Array* create_array(int size) {
            return il2cpp::array_new<app::Byte__Array>(get_class(), size);
        }
        inline app::Byte__Array* create_array(const std::vector<uint8_t>& items) {
            return il2cpp::array_new<app::Byte__Array>(get_class(), items);
        }
        inline app::Byte__Array* create_array(const std::vector<std::byte>& items) {
            return il2cpp::array_new<app::Byte__Array>(get_class(), items);
        }
    } // namespace Byte
} // namespace app::classes::types
