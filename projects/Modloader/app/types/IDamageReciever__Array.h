#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDamageReciever__Array {
        inline app::IDamageReciever__Array__Class** type_info = (app::IDamageReciever__Array__Class**)(modloader::win::memory::resolve_rva(0x047678D8));
        inline app::IDamageReciever__Array__Class* get_class() {
            return il2cpp::get_class<app::IDamageReciever__Array__Class>(type_info, "", "IDamageReciever[]");
        }
        inline app::IDamageReciever__Array* create() {
            return il2cpp::create_object<app::IDamageReciever__Array>(get_class());
        }
    } // namespace IDamageReciever__Array
} // namespace app::classes::types
