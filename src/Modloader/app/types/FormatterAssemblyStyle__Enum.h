#pragma once
#include <Modloader/app/structs/FormatterAssemblyStyle__Enum.h>
#include <Modloader/app/structs/FormatterAssemblyStyle__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FormatterAssemblyStyle__Enum {
        inline app::FormatterAssemblyStyle__Enum__Class** type_info() {
            static app::FormatterAssemblyStyle__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FormatterAssemblyStyle__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FormatterAssemblyStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::FormatterAssemblyStyle__Enum__Class>(type_info(), "System.Runtime.Serialization.Formatters", "FormatterAssemblyStyle");
        }
        inline app::FormatterAssemblyStyle__Enum* create() {
            return il2cpp::create_object<app::FormatterAssemblyStyle__Enum>(get_class());
        }
    } // namespace FormatterAssemblyStyle__Enum
} // namespace app::classes::types
