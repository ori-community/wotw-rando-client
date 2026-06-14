#pragma once
#include <Modloader/app/structs/ParameterizedStrings_FormatParam__Array.h>
#include <Modloader/app/structs/ParameterizedStrings_FormatParam__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterizedStrings_FormatParam__Array {
        inline app::ParameterizedStrings_FormatParam__Array__Class** type_info() {
            static app::ParameterizedStrings_FormatParam__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParameterizedStrings_FormatParam__Array__Class**)(modloader::win::memory::resolve_rva(0x04713B10));
            }
            return cache;
        }
        inline app::ParameterizedStrings_FormatParam__Array__Class* get_class() {
            return il2cpp::get_class<app::ParameterizedStrings_FormatParam__Array__Class>(type_info(), "System", "ParameterizedStrings+FormatParam[]");
        }
        inline app::ParameterizedStrings_FormatParam__Array* create() {
            return il2cpp::create_object<app::ParameterizedStrings_FormatParam__Array>(get_class());
        }
    } // namespace ParameterizedStrings_FormatParam__Array
} // namespace app::classes::types
