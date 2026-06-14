#pragma once
#include <Modloader/app/structs/ZDontSaveGroup.h>
#include <Modloader/app/structs/ZDontSaveGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZDontSaveGroup {
        inline app::ZDontSaveGroup__Class** type_info() {
            static app::ZDontSaveGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZDontSaveGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZDontSaveGroup__Class* get_class() {
            return il2cpp::get_class<app::ZDontSaveGroup__Class>(type_info(), "", "ZDontSaveGroup");
        }
        inline app::ZDontSaveGroup* create() {
            return il2cpp::create_object<app::ZDontSaveGroup>(get_class());
        }
    } // namespace ZDontSaveGroup
} // namespace app::classes::types
