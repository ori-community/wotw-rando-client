#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinEntanglingRootsSpell__Class.h>
#include <Modloader/app/structs/SeinEntanglingRootsSpell.h>

namespace app::classes::types {
    namespace SeinEntanglingRootsSpell {
        namespace {
            inline app::SeinEntanglingRootsSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinEntanglingRootsSpell__Class** type_info = &type_info_ref;
        inline app::SeinEntanglingRootsSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinEntanglingRootsSpell__Class>(type_info, "", "SeinEntanglingRootsSpell");
        }
        inline app::SeinEntanglingRootsSpell* create() {
            return il2cpp::create_object<app::SeinEntanglingRootsSpell>(get_class());
        }
    } // namespace SeinEntanglingRootsSpell
} // namespace app::classes::types
