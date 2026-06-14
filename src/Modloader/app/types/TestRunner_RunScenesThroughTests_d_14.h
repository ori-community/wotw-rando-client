#pragma once
#include <Modloader/app/structs/TestRunner_RunScenesThroughTests_d_14.h>
#include <Modloader/app/structs/TestRunner_RunScenesThroughTests_d_14__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestRunner_RunScenesThroughTests_d_14 {
        inline app::TestRunner_RunScenesThroughTests_d_14__Class** type_info() {
            static app::TestRunner_RunScenesThroughTests_d_14__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TestRunner_RunScenesThroughTests_d_14__Class**)(modloader::win::memory::resolve_rva(0x04740E30));
            }
            return cache;
        }
        inline app::TestRunner_RunScenesThroughTests_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::TestRunner_RunScenesThroughTests_d_14__Class>(type_info(), "HierarchyPerfTest", "TestRunner", "<RunScenesThroughTests>d__14");
        }
        inline app::TestRunner_RunScenesThroughTests_d_14* create() {
            return il2cpp::create_object<app::TestRunner_RunScenesThroughTests_d_14>(get_class());
        }
    } // namespace TestRunner_RunScenesThroughTests_d_14
} // namespace app::classes::types
