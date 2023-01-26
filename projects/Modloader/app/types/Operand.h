#pragma once
#include <Modloader/app/structs/Operand.h>
#include <Modloader/app/structs/Operand__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Operand {
        inline app::Operand__Class** type_info() {
            static app::Operand__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Operand__Class**)(modloader::win::memory::resolve_rva(0x0476AF68));
            }
            return cache;
        }
        inline app::Operand__Class* get_class() {
            return il2cpp::get_class<app::Operand__Class>(type_info(), "MS.Internal.Xml.XPath", "Operand");
        }
        inline app::Operand* create() {
            return il2cpp::create_object<app::Operand>(get_class());
        }
    } // namespace Operand
} // namespace app::classes::types
