#pragma once
#include <Modloader/app/structs/AnimationTester_AnimationTestEntry.h>
#include <Modloader/app/structs/AnimationTester_AnimationTestEntry__Array.h>
#include <Modloader/app/structs/AnimationTester_AnimationTestEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_AnimationTestEntry {
        inline app::AnimationTester_AnimationTestEntry__Class** type_info() {
            static app::AnimationTester_AnimationTestEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationTester_AnimationTestEntry__Class**)(modloader::win::memory::resolve_rva(0x0474DEB8));
            }
            return cache;
        }
        inline app::AnimationTester_AnimationTestEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_AnimationTestEntry__Class>(type_info(), "", "AnimationTester", "AnimationTestEntry");
        }
        inline app::AnimationTester_AnimationTestEntry* create() {
            return il2cpp::create_object<app::AnimationTester_AnimationTestEntry>(get_class());
        }
        inline app::AnimationTester_AnimationTestEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationTester_AnimationTestEntry__Array>(get_class(), size);
        }
        inline app::AnimationTester_AnimationTestEntry__Array* create_array(const std::vector<app::AnimationTester_AnimationTestEntry*>& items) {
            return il2cpp::array_new<app::AnimationTester_AnimationTestEntry__Array>(get_class(), items);
        }
    } // namespace AnimationTester_AnimationTestEntry
} // namespace app::classes::types
