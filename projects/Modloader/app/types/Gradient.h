#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Gradient__Class.h>
#include <Modloader/app/structs/Gradient.h>

namespace app::classes::types {
    namespace Gradient {
        inline app::Gradient__Class** type_info = (app::Gradient__Class**)(modloader::win::memory::resolve_rva(0x047568C0));
        inline app::Gradient__Class* get_class() {
            return il2cpp::get_class<app::Gradient__Class>(type_info, "UnityEngine", "Gradient");
        }
        inline app::Gradient* create() {
            return il2cpp::create_object<app::Gradient>(get_class());
        }
    } // namespace Gradient
} // namespace app::classes::types
