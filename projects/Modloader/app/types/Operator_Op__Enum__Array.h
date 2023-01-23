#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Operator_Op__Enum__Array__Class.h>
#include <Modloader/app/structs/Operator_Op__Enum__Array.h>

namespace app::classes::types {
    namespace Operator_Op__Enum__Array {
        inline app::Operator_Op__Enum__Array__Class** type_info = (app::Operator_Op__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04702190));
        inline app::Operator_Op__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::Operator_Op__Enum__Array__Class>(type_info, "MS.Internal.Xml.XPath", "Operator+Op[]");
        }
        inline app::Operator_Op__Enum__Array* create() {
            return il2cpp::create_object<app::Operator_Op__Enum__Array>(get_class());
        }
    } // namespace Operator_Op__Enum__Array
} // namespace app::classes::types
