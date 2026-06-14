#pragma once
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterInfo_1__Array {
        inline app::ParameterInfo_1__Array__Class** type_info() {
            static app::ParameterInfo_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParameterInfo_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04729930));
            }
            return cache;
        }
        inline app::ParameterInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ParameterInfo_1__Array__Class>(type_info(), "System.Reflection", "ParameterInfo[]");
        }
        inline app::ParameterInfo_1__Array* create() {
            return il2cpp::create_object<app::ParameterInfo_1__Array>(get_class());
        }
    } // namespace ParameterInfo_1__Array
} // namespace app::classes::types
