#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinDamageReciever_c__Class.h>
#include <Modloader/app/structs/SeinDamageReciever_c.h>

namespace app::classes::types {
    namespace SeinDamageReciever_c {
        inline app::SeinDamageReciever_c__Class** type_info = (app::SeinDamageReciever_c__Class**)(modloader::win::memory::resolve_rva(0x047805D8));
        inline app::SeinDamageReciever_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDamageReciever_c__Class>(type_info, "", "SeinDamageReciever", "<>c");
        }
        inline app::SeinDamageReciever_c* create() {
            return il2cpp::create_object<app::SeinDamageReciever_c>(get_class());
        }
    } // namespace SeinDamageReciever_c
} // namespace app::classes::types
