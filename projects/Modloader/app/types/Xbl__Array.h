#pragma once
#include <Modloader/app/structs/Xbl__Array.h>
#include <Modloader/app/structs/Xbl__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Xbl__Array {
        inline app::Xbl__Array__Class** type_info() {
            static app::Xbl__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Xbl__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Xbl__Array__Class* get_class() {
            return il2cpp::get_class<app::Xbl__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Xbl[]");
        }
        inline app::Xbl__Array* create() {
            return il2cpp::create_object<app::Xbl__Array>(get_class());
        }
    } // namespace Xbl__Array
} // namespace app::classes::types
