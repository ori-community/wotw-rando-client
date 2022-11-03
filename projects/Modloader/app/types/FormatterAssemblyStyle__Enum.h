#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FormatterAssemblyStyle__Enum {
        namespace {
            inline app::FormatterAssemblyStyle__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FormatterAssemblyStyle__Enum__Class** type_info = &type_info_ref;
        inline app::FormatterAssemblyStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::FormatterAssemblyStyle__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters", "FormatterAssemblyStyle");
        }
        inline app::FormatterAssemblyStyle__Enum* create() {
            return il2cpp::create_object<app::FormatterAssemblyStyle__Enum>(get_class());
        }
    } // namespace FormatterAssemblyStyle__Enum
} // namespace app::classes::types
