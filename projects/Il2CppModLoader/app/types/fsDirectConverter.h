#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsDirectConverter {
        inline app::fsDirectConverter__Class** type_info = (app::fsDirectConverter__Class**)(modloader::win::memory::resolve_rva(0x0475D688));
        inline app::fsDirectConverter__Class* get_class() {
            return il2cpp::get_class<app::fsDirectConverter__Class>(type_info, "FullSerializer", "fsDirectConverter");
        }
        inline app::fsDirectConverter* create() {
            return il2cpp::create_object<app::fsDirectConverter>(get_class());
        }
        inline app::fsDirectConverter__Array* create_array(int size) {
            return il2cpp::array_new<app::fsDirectConverter__Array>(get_class(), size);
        }
        inline app::fsDirectConverter__Array* create_array(const std::vector<app::fsDirectConverter*>& items) {
            return il2cpp::array_new<app::fsDirectConverter__Array>(get_class(), items);
        }
    } // namespace fsDirectConverter
} // namespace app::classes::types
