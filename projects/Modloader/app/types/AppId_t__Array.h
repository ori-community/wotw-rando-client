#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AppId_t__Array {
        inline app::AppId_t__Array__Class** type_info = (app::AppId_t__Array__Class**)(modloader::win::memory::resolve_rva(0x04754E18));
        inline app::AppId_t__Array__Class* get_class() {
            return il2cpp::get_class<app::AppId_t__Array__Class>(type_info, "Steamworks", "AppId_t[]");
        }
        inline app::AppId_t__Array* create() {
            return il2cpp::create_object<app::AppId_t__Array>(get_class());
        }
    } // namespace AppId_t__Array
} // namespace app::classes::types
