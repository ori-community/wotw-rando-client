#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancellationCallbackInfo {
        inline app::CancellationCallbackInfo__Class** type_info = (app::CancellationCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0476A230));
        inline app::CancellationCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::CancellationCallbackInfo__Class>(type_info, "System.Threading", "CancellationCallbackInfo");
        }
        inline app::CancellationCallbackInfo* create() {
            return il2cpp::create_object<app::CancellationCallbackInfo>(get_class());
        }
        inline app::CancellationCallbackInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::CancellationCallbackInfo__Array>(get_class(), size);
        }
        inline app::CancellationCallbackInfo__Array* create_array(const std::vector<app::CancellationCallbackInfo*>& items) {
            return il2cpp::array_new<app::CancellationCallbackInfo__Array>(get_class(), items);
        }
    } // namespace CancellationCallbackInfo
} // namespace app::classes::types
