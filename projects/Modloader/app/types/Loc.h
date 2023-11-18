#pragma once
#include <Modloader/app/structs/Loc.h>
#include <Modloader/app/structs/Loc__Array.h>
#include <Modloader/app/structs/Loc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Loc {
        inline app::Loc__Class** type_info() {
            static app::Loc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Loc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Loc__Class* get_class() {
            return il2cpp::get_class<app::Loc__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Loc");
        }
        inline app::Loc* create() {
            return il2cpp::create_object<app::Loc>(get_class());
        }
        inline app::Loc__Array* create_array(int size) {
            return il2cpp::array_new<app::Loc__Array>(get_class(), size);
        }
        inline app::Loc__Array* create_array(const std::vector<app::Loc*>& items) {
            return il2cpp::array_new<app::Loc__Array>(get_class(), items);
        }
    } // namespace Loc
} // namespace app::classes::types
