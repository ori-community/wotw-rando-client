#pragma once
#include <Modloader/app/structs/DesiredUberStateFloat__Array.h>
#include <Modloader/app/structs/DesiredUberStateFloat__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateFloat__Array {
        inline app::DesiredUberStateFloat__Array__Class** type_info() {
            static app::DesiredUberStateFloat__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesiredUberStateFloat__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesiredUberStateFloat__Array__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateFloat__Array__Class>(type_info(), "", "DesiredUberStateFloat[]");
        }
        inline app::DesiredUberStateFloat__Array* create() {
            return il2cpp::create_object<app::DesiredUberStateFloat__Array>(get_class());
        }
    } // namespace DesiredUberStateFloat__Array
} // namespace app::classes::types
