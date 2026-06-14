#pragma once
#include <Modloader/app/structs/ParameterModifier__Array.h>
#include <Modloader/app/structs/ParameterModifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterModifier__Array {
        inline app::ParameterModifier__Array__Class** type_info() {
            static app::ParameterModifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParameterModifier__Array__Class**)(modloader::win::memory::resolve_rva(0x0472FE78));
            }
            return cache;
        }
        inline app::ParameterModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::ParameterModifier__Array__Class>(type_info(), "System.Reflection", "ParameterModifier[]");
        }
        inline app::ParameterModifier__Array* create() {
            return il2cpp::create_object<app::ParameterModifier__Array>(get_class());
        }
    } // namespace ParameterModifier__Array
} // namespace app::classes::types
