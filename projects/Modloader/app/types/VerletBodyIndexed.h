#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletBodyIndexed__Class.h>
#include <Modloader/app/structs/VerletBodyIndexed.h>

namespace app::classes::types {
    namespace VerletBodyIndexed {
        inline app::VerletBodyIndexed__Class** type_info = (app::VerletBodyIndexed__Class**)(modloader::win::memory::resolve_rva(0x0474D430));
        inline app::VerletBodyIndexed__Class* get_class() {
            return il2cpp::get_class<app::VerletBodyIndexed__Class>(type_info, "Moon", "VerletBodyIndexed");
        }
        inline app::VerletBodyIndexed* create() {
            return il2cpp::create_object<app::VerletBodyIndexed>(get_class());
        }
    } // namespace VerletBodyIndexed
} // namespace app::classes::types
