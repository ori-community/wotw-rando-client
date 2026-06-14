#pragma once
#include <Modloader/app/structs/Group_1.h>
#include <Modloader/app/structs/Group_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Group_1 {
        inline app::Group_1__Class** type_info() {
            static app::Group_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Group_1__Class**)(modloader::win::memory::resolve_rva(0x047328E8));
            }
            return cache;
        }
        inline app::Group_1__Class* get_class() {
            return il2cpp::get_class<app::Group_1__Class>(type_info(), "MS.Internal.Xml.XPath", "Group");
        }
        inline app::Group_1* create() {
            return il2cpp::create_object<app::Group_1>(get_class());
        }
    } // namespace Group_1
} // namespace app::classes::types
