#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum__Class.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum__Array.h>

namespace app::classes::types {
    namespace InternalPrimitiveTypeE__Enum {
        inline app::InternalPrimitiveTypeE__Enum__Class** type_info = (app::InternalPrimitiveTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475C608));
        inline app::InternalPrimitiveTypeE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalPrimitiveTypeE__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE");
        }
        inline app::InternalPrimitiveTypeE__Enum* create() {
            return il2cpp::create_object<app::InternalPrimitiveTypeE__Enum>(get_class());
        }
        inline app::InternalPrimitiveTypeE__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::InternalPrimitiveTypeE__Enum__Array>(get_class(), size);
        }
        inline app::InternalPrimitiveTypeE__Enum__Array* create_array(const std::vector<app::InternalPrimitiveTypeE__Enum*>& items) {
            return il2cpp::array_new<app::InternalPrimitiveTypeE__Enum__Array>(get_class(), items);
        }
    } // namespace InternalPrimitiveTypeE__Enum
} // namespace app::classes::types
