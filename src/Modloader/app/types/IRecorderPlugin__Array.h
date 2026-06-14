#pragma once
#include <Modloader/app/structs/IRecorderPlugin__Array.h>
#include <Modloader/app/structs/IRecorderPlugin__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRecorderPlugin__Array {
        inline app::IRecorderPlugin__Array__Class** type_info() {
            static app::IRecorderPlugin__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IRecorderPlugin__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IRecorderPlugin__Array__Class* get_class() {
            return il2cpp::get_class<app::IRecorderPlugin__Array__Class>(type_info(), "", "IRecorderPlugin[]");
        }
        inline app::IRecorderPlugin__Array* create() {
            return il2cpp::create_object<app::IRecorderPlugin__Array>(get_class());
        }
    } // namespace IRecorderPlugin__Array
} // namespace app::classes::types
