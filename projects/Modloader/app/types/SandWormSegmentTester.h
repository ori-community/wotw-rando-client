#pragma once
#include <Modloader/app/structs/SandWormSegmentTester.h>
#include <Modloader/app/structs/SandWormSegmentTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormSegmentTester {
        inline app::SandWormSegmentTester__Class** type_info() {
            static app::SandWormSegmentTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormSegmentTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormSegmentTester__Class* get_class() {
            return il2cpp::get_class<app::SandWormSegmentTester__Class>(type_info(), "", "SandWormSegmentTester");
        }
        inline app::SandWormSegmentTester* create() {
            return il2cpp::create_object<app::SandWormSegmentTester>(get_class());
        }
    } // namespace SandWormSegmentTester
} // namespace app::classes::types
