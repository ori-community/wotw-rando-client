#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITrackingHandler__Array {
        inline app::ITrackingHandler__Array__Class** type_info = (app::ITrackingHandler__Array__Class**)(modloader::win::memory::resolve_rva(0x04774E60));
        inline app::ITrackingHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::ITrackingHandler__Array__Class>(type_info, "System.Runtime.Remoting.Services", "ITrackingHandler[]");
        }
        inline app::ITrackingHandler__Array* create() {
            return il2cpp::create_object<app::ITrackingHandler__Array>(get_class());
        }
    } // namespace ITrackingHandler__Array
} // namespace app::classes::types
