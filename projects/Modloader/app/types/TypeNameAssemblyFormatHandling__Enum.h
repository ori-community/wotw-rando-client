#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeNameAssemblyFormatHandling__Enum {
        namespace {
            inline app::TypeNameAssemblyFormatHandling__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TypeNameAssemblyFormatHandling__Enum__Class** type_info = &type_info_ref;
        inline app::TypeNameAssemblyFormatHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeNameAssemblyFormatHandling__Enum__Class>(type_info, "Newtonsoft.Json", "TypeNameAssemblyFormatHandling");
        }
        inline app::TypeNameAssemblyFormatHandling__Enum* create() {
            return il2cpp::create_object<app::TypeNameAssemblyFormatHandling__Enum>(get_class());
        }
    } // namespace TypeNameAssemblyFormatHandling__Enum
} // namespace app::classes::types
