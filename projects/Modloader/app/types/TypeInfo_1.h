#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeInfo_1__Class.h>
#include <Modloader/app/structs/TypeInfo_1.h>

namespace app::classes::types {
    namespace TypeInfo_1 {
        inline app::TypeInfo_1__Class** type_info = (app::TypeInfo_1__Class**)(modloader::win::memory::resolve_rva(0x04734BD0));
        inline app::TypeInfo_1__Class* get_class() {
            return il2cpp::get_class<app::TypeInfo_1__Class>(type_info, "System.Runtime.Remoting", "TypeInfo");
        }
        inline app::TypeInfo_1* create() {
            return il2cpp::create_object<app::TypeInfo_1>(get_class());
        }
    } // namespace TypeInfo_1
} // namespace app::classes::types
