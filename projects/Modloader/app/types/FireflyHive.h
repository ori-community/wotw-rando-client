#pragma once
#include <Modloader/app/structs/FireflyHive.h>
#include <Modloader/app/structs/FireflyHive__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FireflyHive {
        inline app::FireflyHive__Class** type_info() {
            static app::FireflyHive__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FireflyHive__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FireflyHive__Class* get_class() {
            return il2cpp::get_class<app::FireflyHive__Class>(type_info(), "", "FireflyHive");
        }
        inline app::FireflyHive* create() {
            return il2cpp::create_object<app::FireflyHive>(get_class());
        }
    } // namespace FireflyHive
} // namespace app::classes::types
