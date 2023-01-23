#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InternalArrayTypeE__Enum__Class.h>
#include <Modloader/app/structs/InternalArrayTypeE__Enum.h>

namespace app::classes::types {
    namespace InternalArrayTypeE__Enum {
        inline app::InternalArrayTypeE__Enum__Class** type_info = (app::InternalArrayTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x04745CF8));
        inline app::InternalArrayTypeE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalArrayTypeE__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalArrayTypeE");
        }
        inline app::InternalArrayTypeE__Enum* create() {
            return il2cpp::create_object<app::InternalArrayTypeE__Enum>(get_class());
        }
    } // namespace InternalArrayTypeE__Enum
} // namespace app::classes::types
