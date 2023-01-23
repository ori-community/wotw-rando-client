#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReflectionProbe__Class.h>
#include <Modloader/app/structs/ReflectionProbe.h>

namespace app::classes::types {
    namespace ReflectionProbe {
        inline app::ReflectionProbe__Class** type_info = (app::ReflectionProbe__Class**)(modloader::win::memory::resolve_rva(0x0475BD80));
        inline app::ReflectionProbe__Class* get_class() {
            return il2cpp::get_class<app::ReflectionProbe__Class>(type_info, "UnityEngine", "ReflectionProbe");
        }
        inline app::ReflectionProbe* create() {
            return il2cpp::create_object<app::ReflectionProbe>(get_class());
        }
    } // namespace ReflectionProbe
} // namespace app::classes::types
