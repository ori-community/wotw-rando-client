#pragma once
#include <Modloader/app/structs/Function.h>
#include <Modloader/app/structs/Function__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Function {
        inline app::Function__Class** type_info() {
            static app::Function__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Function__Class**)(modloader::win::memory::resolve_rva(0x04733030));
            }
            return cache;
        }
        inline app::Function__Class* get_class() {
            return il2cpp::get_class<app::Function__Class>(type_info(), "MS.Internal.Xml.XPath", "Function");
        }
        inline app::Function* create() {
            return il2cpp::create_object<app::Function>(get_class());
        }
    } // namespace Function
} // namespace app::classes::types
