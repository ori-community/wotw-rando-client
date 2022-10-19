#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolGroup {
        inline app::UberPoolGroup__Class** type_info = (app::UberPoolGroup__Class**)(modloader::win::memory::resolve_rva(0x047779B8));
        inline app::UberPoolGroup__Class* get_class() {
            return il2cpp::get_class<app::UberPoolGroup__Class>(type_info, "", "UberPoolGroup");
        }
        inline app::UberPoolGroup* create() {
            return il2cpp::create_object<app::UberPoolGroup>(get_class());
        }
        inline app::UberPoolGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolGroup__Array>(get_class(), size);
        }
        inline app::UberPoolGroup__Array* create_array(const std::vector<app::UberPoolGroup*>& items) {
            return il2cpp::array_new<app::UberPoolGroup__Array>(get_class(), items);
        }
    } // namespace UberPoolGroup
} // namespace app::classes::types
