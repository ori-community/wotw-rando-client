#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PrimitiveTypeCode__Enum__Class.h>
#include <Modloader/app/structs/PrimitiveTypeCode__Enum.h>
#include <Modloader/app/structs/PrimitiveTypeCode__Enum__Array.h>

namespace app::classes::types {
    namespace PrimitiveTypeCode__Enum {
        inline app::PrimitiveTypeCode__Enum__Class** type_info = (app::PrimitiveTypeCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475C868));
        inline app::PrimitiveTypeCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PrimitiveTypeCode__Enum__Class>(type_info, "Newtonsoft.Json.Utilities", "PrimitiveTypeCode");
        }
        inline app::PrimitiveTypeCode__Enum* create() {
            return il2cpp::create_object<app::PrimitiveTypeCode__Enum>(get_class());
        }
        inline app::PrimitiveTypeCode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::PrimitiveTypeCode__Enum__Array>(get_class(), size);
        }
        inline app::PrimitiveTypeCode__Enum__Array* create_array(const std::vector<app::PrimitiveTypeCode__Enum*>& items) {
            return il2cpp::array_new<app::PrimitiveTypeCode__Enum__Array>(get_class(), items);
        }
    } // namespace PrimitiveTypeCode__Enum
} // namespace app::classes::types
