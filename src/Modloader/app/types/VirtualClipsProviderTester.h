#pragma once
#include <Modloader/app/structs/VirtualClipsProviderTester.h>
#include <Modloader/app/structs/VirtualClipsProviderTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VirtualClipsProviderTester {
        inline app::VirtualClipsProviderTester__Class** type_info() {
            static app::VirtualClipsProviderTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VirtualClipsProviderTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VirtualClipsProviderTester__Class* get_class() {
            return il2cpp::get_class<app::VirtualClipsProviderTester__Class>(type_info(), "", "VirtualClipsProviderTester");
        }
        inline app::VirtualClipsProviderTester* create() {
            return il2cpp::create_object<app::VirtualClipsProviderTester>(get_class());
        }
    } // namespace VirtualClipsProviderTester
} // namespace app::classes::types
