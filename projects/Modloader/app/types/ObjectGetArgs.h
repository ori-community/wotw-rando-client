#pragma once
#include <Modloader/app/structs/ObjectGetArgs.h>
#include <Modloader/app/structs/ObjectGetArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectGetArgs {
        inline app::ObjectGetArgs__Class** type_info() {
            static app::ObjectGetArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectGetArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectGetArgs__Class* get_class() {
            return il2cpp::get_class<app::ObjectGetArgs__Class>(type_info(), "", "ObjectGetArgs");
        }
        inline app::ObjectGetArgs* create() {
            return il2cpp::create_object<app::ObjectGetArgs>(get_class());
        }
    } // namespace ObjectGetArgs
} // namespace app::classes::types
