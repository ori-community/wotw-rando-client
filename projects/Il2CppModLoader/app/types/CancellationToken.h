#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancellationToken {
        inline app::CancellationToken__Class** type_info = (app::CancellationToken__Class**)(modloader::win::memory::resolve_rva(0x04784DB0));
        inline app::CancellationToken__Class* get_class() {
            return il2cpp::get_class<app::CancellationToken__Class>(type_info, "System.Threading", "CancellationToken");
        }
        inline app::CancellationToken* create() {
            return il2cpp::create_object<app::CancellationToken>(get_class());
        }
        inline app::CancellationToken__Boxed* box(app::CancellationToken value) {
            return il2cpp::box_value<app::CancellationToken__Boxed>(get_class(), value);
        }
        inline app::CancellationToken__Array* create_array(int size) {
            return il2cpp::array_new<app::CancellationToken__Array>(get_class(), size);
        }
        inline app::CancellationToken__Array* create_array(const std::vector<app::CancellationToken>& items) {
            return il2cpp::array_new<app::CancellationToken__Array>(get_class(), items);
        }
    } // namespace CancellationToken
} // namespace app::classes::types
