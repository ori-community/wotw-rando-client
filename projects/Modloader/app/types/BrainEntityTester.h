#pragma once
#include <Modloader/app/structs/BrainEntityTester.h>
#include <Modloader/app/structs/BrainEntityTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrainEntityTester {
        inline app::BrainEntityTester__Class** type_info() {
            static app::BrainEntityTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrainEntityTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrainEntityTester__Class* get_class() {
            return il2cpp::get_class<app::BrainEntityTester__Class>(type_info(), "", "BrainEntityTester");
        }
        inline app::BrainEntityTester* create() {
            return il2cpp::create_object<app::BrainEntityTester>(get_class());
        }
    } // namespace BrainEntityTester
} // namespace app::classes::types
