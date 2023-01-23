#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SimpleType__Class.h>
#include <Modloader/app/structs/SimpleType.h>

namespace app::classes::types {
    namespace SimpleType {
        inline app::SimpleType__Class** type_info = (app::SimpleType__Class**)(modloader::win::memory::resolve_rva(0x04770378));
        inline app::SimpleType__Class* get_class() {
            return il2cpp::get_class<app::SimpleType__Class>(type_info, "System.Data", "SimpleType");
        }
        inline app::SimpleType* create() {
            return il2cpp::create_object<app::SimpleType>(get_class());
        }
    } // namespace SimpleType
} // namespace app::classes::types
