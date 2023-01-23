#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReflectionExtensions_c__Class.h>
#include <Modloader/app/structs/ReflectionExtensions_c.h>

namespace app::classes::types {
    namespace ReflectionExtensions_c {
        inline app::ReflectionExtensions_c__Class** type_info = (app::ReflectionExtensions_c__Class**)(modloader::win::memory::resolve_rva(0x047457D8));
        inline app::ReflectionExtensions_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionExtensions_c__Class>(type_info, "Moon", "ReflectionExtensions", "<>c");
        }
        inline app::ReflectionExtensions_c* create() {
            return il2cpp::create_object<app::ReflectionExtensions_c>(get_class());
        }
    } // namespace ReflectionExtensions_c
} // namespace app::classes::types
