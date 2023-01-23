#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CartSet__Class.h>
#include <Modloader/app/structs/CartSet.h>

namespace app::classes::types {
    namespace CartSet {
        namespace {
            inline app::CartSet__Class* type_info_ref = nullptr;
        }
        inline app::CartSet__Class** type_info = &type_info_ref;
        inline app::CartSet__Class* get_class() {
            return il2cpp::get_class<app::CartSet__Class>(type_info, "", "CartSet");
        }
        inline app::CartSet* create() {
            return il2cpp::create_object<app::CartSet>(get_class());
        }
    } // namespace CartSet
} // namespace app::classes::types
