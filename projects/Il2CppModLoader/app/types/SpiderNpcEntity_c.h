#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderNpcEntity_c {
        inline app::SpiderNpcEntity_c__Class** type_info = (app::SpiderNpcEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04795CB0));
        inline app::SpiderNpcEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderNpcEntity_c__Class>(type_info, "", "SpiderNpcEntity", "<>c");
        }
        inline app::SpiderNpcEntity_c* create() {
            return il2cpp::create_object<app::SpiderNpcEntity_c>(get_class());
        }
    } // namespace SpiderNpcEntity_c
} // namespace app::classes::types
