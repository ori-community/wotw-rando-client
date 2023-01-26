#pragma once
#include <Modloader/app/structs/KnockupTester.h>
#include <Modloader/app/structs/KnockupTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KnockupTester {
        inline app::KnockupTester__Class** type_info() {
            static app::KnockupTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KnockupTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KnockupTester__Class* get_class() {
            return il2cpp::get_class<app::KnockupTester__Class>(type_info(), "", "KnockupTester");
        }
        inline app::KnockupTester* create() {
            return il2cpp::create_object<app::KnockupTester>(get_class());
        }
    } // namespace KnockupTester
} // namespace app::classes::types
