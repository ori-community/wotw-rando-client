#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDamageReciever_c_DisplayClass58_2 {
        inline app::SeinDamageReciever_c_DisplayClass58_2__Class** type_info = (app::SeinDamageReciever_c_DisplayClass58_2__Class**)(modloader::win::memory::resolve_rva(0x04737640));
        inline app::SeinDamageReciever_c_DisplayClass58_2__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDamageReciever_c_DisplayClass58_2__Class>(type_info, "", "SeinDamageReciever", "<>c__DisplayClass58_2");
        }
        inline app::SeinDamageReciever_c_DisplayClass58_2* create() {
            return il2cpp::create_object<app::SeinDamageReciever_c_DisplayClass58_2>(get_class());
        }
    } // namespace SeinDamageReciever_c_DisplayClass58_2
} // namespace app::classes::types
