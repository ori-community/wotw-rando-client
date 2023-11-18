#pragma once
#include <Modloader/app/structs/CADSerializer.h>
#include <Modloader/app/structs/CADSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CADSerializer {
        inline app::CADSerializer__Class** type_info() {
            static app::CADSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CADSerializer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CADSerializer__Class* get_class() {
            return il2cpp::get_class<app::CADSerializer__Class>(type_info(), "System.Runtime.Remoting.Channels", "CADSerializer");
        }
        inline app::CADSerializer* create() {
            return il2cpp::create_object<app::CADSerializer>(get_class());
        }
    } // namespace CADSerializer
} // namespace app::classes::types
