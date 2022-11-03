#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCText__Array {
        inline app::CCText__Array__Class** type_info = (app::CCText__Array__Class**)(modloader::win::memory::resolve_rva(0x04739A10));
        inline app::CCText__Array__Class* get_class() {
            return il2cpp::get_class<app::CCText__Array__Class>(type_info, "", "CCText[]");
        }
        inline app::CCText__Array* create() {
            return il2cpp::create_object<app::CCText__Array>(get_class());
        }
    } // namespace CCText__Array
} // namespace app::classes::types
