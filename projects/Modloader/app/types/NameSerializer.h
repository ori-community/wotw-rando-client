#pragma once
#include <Modloader/app/structs/NameSerializer.h>
#include <Modloader/app/structs/NameSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameSerializer {
        inline app::NameSerializer__Class** type_info() {
            static app::NameSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NameSerializer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NameSerializer__Class* get_class() {
            return il2cpp::get_class<app::NameSerializer__Class>(type_info(), "System.Xml.Linq", "NameSerializer");
        }
        inline app::NameSerializer* create() {
            return il2cpp::create_object<app::NameSerializer>(get_class());
        }
    } // namespace NameSerializer
} // namespace app::classes::types
