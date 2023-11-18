#pragma once
#include <Modloader/app/structs/Xbl.h>
#include <Modloader/app/structs/Xbl__Array.h>
#include <Modloader/app/structs/Xbl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Xbl {
        inline app::Xbl__Class** type_info() {
            static app::Xbl__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Xbl__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Xbl__Class* get_class() {
            return il2cpp::get_class<app::Xbl__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Xbl");
        }
        inline app::Xbl* create() {
            return il2cpp::create_object<app::Xbl>(get_class());
        }
        inline app::Xbl__Array* create_array(int size) {
            return il2cpp::array_new<app::Xbl__Array>(get_class(), size);
        }
        inline app::Xbl__Array* create_array(const std::vector<app::Xbl*>& items) {
            return il2cpp::array_new<app::Xbl__Array>(get_class(), items);
        }
    } // namespace Xbl
} // namespace app::classes::types
