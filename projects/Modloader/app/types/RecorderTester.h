#pragma once
#include <Modloader/app/structs/RecorderTester.h>
#include <Modloader/app/structs/RecorderTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderTester {
        inline app::RecorderTester__Class** type_info() {
            static app::RecorderTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecorderTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecorderTester__Class* get_class() {
            return il2cpp::get_class<app::RecorderTester__Class>(type_info(), "", "RecorderTester");
        }
        inline app::RecorderTester* create() {
            return il2cpp::create_object<app::RecorderTester>(get_class());
        }
    } // namespace RecorderTester
} // namespace app::classes::types
