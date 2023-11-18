#pragma once
#include <Modloader/app/structs/IEntry__Array.h>
#include <Modloader/app/structs/IEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEntry__Array {
        inline app::IEntry__Array__Class** type_info() {
            static app::IEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::IEntry__Array__Class>(type_info(), "", "IEntry[]");
        }
        inline app::IEntry__Array* create() {
            return il2cpp::create_object<app::IEntry__Array>(get_class());
        }
    } // namespace IEntry__Array
} // namespace app::classes::types
