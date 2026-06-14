#pragma once
#include <Modloader/app/structs/Axis.h>
#include <Modloader/app/structs/Axis__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Axis {
        inline app::Axis__Class** type_info() {
            static app::Axis__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Axis__Class**)(modloader::win::memory::resolve_rva(0x04776FA0));
            }
            return cache;
        }
        inline app::Axis__Class* get_class() {
            return il2cpp::get_class<app::Axis__Class>(type_info(), "MS.Internal.Xml.XPath", "Axis");
        }
        inline app::Axis* create() {
            return il2cpp::create_object<app::Axis>(get_class());
        }
    } // namespace Axis
} // namespace app::classes::types
