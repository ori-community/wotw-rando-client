#pragma once
#include <Modloader/app/structs/Variable.h>
#include <Modloader/app/structs/Variable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Variable {
        inline app::Variable__Class** type_info() {
            static app::Variable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Variable__Class**)(modloader::win::memory::resolve_rva(0x04753108));
            }
            return cache;
        }
        inline app::Variable__Class* get_class() {
            return il2cpp::get_class<app::Variable__Class>(type_info(), "MS.Internal.Xml.XPath", "Variable");
        }
        inline app::Variable* create() {
            return il2cpp::create_object<app::Variable>(get_class());
        }
    } // namespace Variable
} // namespace app::classes::types
