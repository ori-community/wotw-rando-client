#pragma once
#include <Modloader/app/structs/ReflectionOnlyType.h>
#include <Modloader/app/structs/ReflectionOnlyType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionOnlyType {
        inline app::ReflectionOnlyType__Class** type_info() {
            static app::ReflectionOnlyType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionOnlyType__Class**)(modloader::win::memory::resolve_rva(0x0475C0D8));
            }
            return cache;
        }
        inline app::ReflectionOnlyType__Class* get_class() {
            return il2cpp::get_class<app::ReflectionOnlyType__Class>(type_info(), "System", "ReflectionOnlyType");
        }
        inline app::ReflectionOnlyType* create() {
            return il2cpp::create_object<app::ReflectionOnlyType>(get_class());
        }
    } // namespace ReflectionOnlyType
} // namespace app::classes::types
