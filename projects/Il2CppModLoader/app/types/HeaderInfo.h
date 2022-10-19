#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HeaderInfo {
        inline app::HeaderInfo__Class** type_info = (app::HeaderInfo__Class**)(modloader::win::memory::resolve_rva(0x0477B1A8));
        inline app::HeaderInfo__Class* get_class() {
            return il2cpp::get_class<app::HeaderInfo__Class>(type_info, "System.Net", "HeaderInfo");
        }
        inline app::HeaderInfo* create() {
            return il2cpp::create_object<app::HeaderInfo>(get_class());
        }
        inline app::HeaderInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::HeaderInfo__Array>(get_class(), size);
        }
        inline app::HeaderInfo__Array* create_array(const std::vector<app::HeaderInfo*>& items) {
            return il2cpp::array_new<app::HeaderInfo__Array>(get_class(), items);
        }
    } // namespace HeaderInfo
} // namespace app::classes::types
