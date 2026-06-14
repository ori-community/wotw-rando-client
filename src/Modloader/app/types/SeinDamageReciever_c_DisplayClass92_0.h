#pragma once
#include <Modloader/app/structs/SeinDamageReciever_c_DisplayClass92_0.h>
#include <Modloader/app/structs/SeinDamageReciever_c_DisplayClass92_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDamageReciever_c_DisplayClass92_0 {
        inline app::SeinDamageReciever_c_DisplayClass92_0__Class** type_info() {
            static app::SeinDamageReciever_c_DisplayClass92_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDamageReciever_c_DisplayClass92_0__Class**)(modloader::win::memory::resolve_rva(0x04753B60));
            }
            return cache;
        }
        inline app::SeinDamageReciever_c_DisplayClass92_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDamageReciever_c_DisplayClass92_0__Class>(type_info(), "", "SeinDamageReciever", "<>c__DisplayClass92_0");
        }
        inline app::SeinDamageReciever_c_DisplayClass92_0* create() {
            return il2cpp::create_object<app::SeinDamageReciever_c_DisplayClass92_0>(get_class());
        }
    } // namespace SeinDamageReciever_c_DisplayClass92_0
} // namespace app::classes::types
