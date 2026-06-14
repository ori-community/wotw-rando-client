#pragma once
#include <Modloader/app/structs/IKSimple.h>
#include <Modloader/app/structs/IKSimple__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSimple {
        inline app::IKSimple__Class** type_info() {
            static app::IKSimple__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKSimple__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKSimple__Class* get_class() {
            return il2cpp::get_class<app::IKSimple__Class>(type_info(), "", "IKSimple");
        }
        inline app::IKSimple* create() {
            return il2cpp::create_object<app::IKSimple>(get_class());
        }
    } // namespace IKSimple
} // namespace app::classes::types
