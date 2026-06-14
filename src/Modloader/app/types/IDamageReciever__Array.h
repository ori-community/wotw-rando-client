#pragma once
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IDamageReciever__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDamageReciever__Array {
        inline app::IDamageReciever__Array__Class** type_info() {
            static app::IDamageReciever__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDamageReciever__Array__Class**)(modloader::win::memory::resolve_rva(0x047678D8));
            }
            return cache;
        }
        inline app::IDamageReciever__Array__Class* get_class() {
            return il2cpp::get_class<app::IDamageReciever__Array__Class>(type_info(), "", "IDamageReciever[]");
        }
        inline app::IDamageReciever__Array* create() {
            return il2cpp::create_object<app::IDamageReciever__Array>(get_class());
        }
    } // namespace IDamageReciever__Array
} // namespace app::classes::types
