#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeConverter__Class.h>
#include <Modloader/app/structs/TypeConverter.h>

namespace app::classes::types {
    namespace TypeConverter {
        inline app::TypeConverter__Class** type_info = (app::TypeConverter__Class**)(modloader::win::memory::resolve_rva(0x04753398));
        inline app::TypeConverter__Class* get_class() {
            return il2cpp::get_class<app::TypeConverter__Class>(type_info, "System.ComponentModel", "TypeConverter");
        }
        inline app::TypeConverter* create() {
            return il2cpp::create_object<app::TypeConverter>(get_class());
        }
    } // namespace TypeConverter
} // namespace app::classes::types
