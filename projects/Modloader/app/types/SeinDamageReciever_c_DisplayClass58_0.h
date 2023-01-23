#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinDamageReciever_c_DisplayClass58_0__Class.h>
#include <Modloader/app/structs/SeinDamageReciever_c_DisplayClass58_0.h>

namespace app::classes::types {
    namespace SeinDamageReciever_c_DisplayClass58_0 {
        inline app::SeinDamageReciever_c_DisplayClass58_0__Class** type_info = (app::SeinDamageReciever_c_DisplayClass58_0__Class**)(modloader::win::memory::resolve_rva(0x0475FDB0));
        inline app::SeinDamageReciever_c_DisplayClass58_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDamageReciever_c_DisplayClass58_0__Class>(type_info, "", "SeinDamageReciever", "<>c__DisplayClass58_0");
        }
        inline app::SeinDamageReciever_c_DisplayClass58_0* create() {
            return il2cpp::create_object<app::SeinDamageReciever_c_DisplayClass58_0>(get_class());
        }
    } // namespace SeinDamageReciever_c_DisplayClass58_0
} // namespace app::classes::types
