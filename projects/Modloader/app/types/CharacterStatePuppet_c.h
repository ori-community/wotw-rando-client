#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterStatePuppet_c__Class.h>
#include <Modloader/app/structs/CharacterStatePuppet_c.h>

namespace app::classes::types {
    namespace CharacterStatePuppet_c {
        inline app::CharacterStatePuppet_c__Class** type_info = (app::CharacterStatePuppet_c__Class**)(modloader::win::memory::resolve_rva(0x04701DE0));
        inline app::CharacterStatePuppet_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterStatePuppet_c__Class>(type_info, "", "CharacterStatePuppet", "<>c");
        }
        inline app::CharacterStatePuppet_c* create() {
            return il2cpp::create_object<app::CharacterStatePuppet_c>(get_class());
        }
    } // namespace CharacterStatePuppet_c
} // namespace app::classes::types
