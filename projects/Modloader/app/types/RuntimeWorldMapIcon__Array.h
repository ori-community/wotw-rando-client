#pragma once
#include <Modloader/app/structs/RuntimeWorldMapIcon__Array.h>
#include <Modloader/app/structs/RuntimeWorldMapIcon__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeWorldMapIcon__Array {
        inline app::RuntimeWorldMapIcon__Array__Class** type_info() {
            static app::RuntimeWorldMapIcon__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeWorldMapIcon__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeWorldMapIcon__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeWorldMapIcon__Array__Class>(type_info(), "", "RuntimeWorldMapIcon[]");
        }
        inline app::RuntimeWorldMapIcon__Array* create() {
            return il2cpp::create_object<app::RuntimeWorldMapIcon__Array>(get_class());
        }
    } // namespace RuntimeWorldMapIcon__Array
} // namespace app::classes::types
