#pragma once
#include <Modloader/app/structs/DynamicPropertyCollection_DynamicPropertyReg.h>
#include <Modloader/app/structs/DynamicPropertyCollection_DynamicPropertyReg__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicPropertyCollection_DynamicPropertyReg {
        inline app::DynamicPropertyCollection_DynamicPropertyReg__Class** type_info() {
            static app::DynamicPropertyCollection_DynamicPropertyReg__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicPropertyCollection_DynamicPropertyReg__Class**)(modloader::win::memory::resolve_rva(0x0472D9C0));
            }
            return cache;
        }
        inline app::DynamicPropertyCollection_DynamicPropertyReg__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicPropertyCollection_DynamicPropertyReg__Class>(type_info(), "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection", "DynamicPropertyReg");
        }
        inline app::DynamicPropertyCollection_DynamicPropertyReg* create() {
            return il2cpp::create_object<app::DynamicPropertyCollection_DynamicPropertyReg>(get_class());
        }
    } // namespace DynamicPropertyCollection_DynamicPropertyReg
} // namespace app::classes::types
