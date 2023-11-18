#pragma once
#include <Modloader/app/structs/IPrewarmable__Array.h>
#include <Modloader/app/structs/IPrewarmable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPrewarmable__Array {
        inline app::IPrewarmable__Array__Class** type_info() {
            static app::IPrewarmable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPrewarmable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPrewarmable__Array__Class* get_class() {
            return il2cpp::get_class<app::IPrewarmable__Array__Class>(type_info(), "", "IPrewarmable[]");
        }
        inline app::IPrewarmable__Array* create() {
            return il2cpp::create_object<app::IPrewarmable__Array>(get_class());
        }
    } // namespace IPrewarmable__Array
} // namespace app::classes::types
