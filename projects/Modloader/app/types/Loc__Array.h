#pragma once
#include <Modloader/app/structs/Loc__Array.h>
#include <Modloader/app/structs/Loc__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Loc__Array {
        inline app::Loc__Array__Class** type_info() {
            static app::Loc__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Loc__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Loc__Array__Class* get_class() {
            return il2cpp::get_class<app::Loc__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Loc[]");
        }
        inline app::Loc__Array* create() {
            return il2cpp::create_object<app::Loc__Array>(get_class());
        }
    } // namespace Loc__Array
} // namespace app::classes::types
