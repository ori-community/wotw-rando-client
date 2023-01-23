#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BaselinePerfAnalyzer__Class.h>
#include <Modloader/app/structs/BaselinePerfAnalyzer.h>

namespace app::classes::types {
    namespace BaselinePerfAnalyzer {
        inline app::BaselinePerfAnalyzer__Class** type_info = (app::BaselinePerfAnalyzer__Class**)(modloader::win::memory::resolve_rva(0x0470B0E8));
        inline app::BaselinePerfAnalyzer__Class* get_class() {
            return il2cpp::get_class<app::BaselinePerfAnalyzer__Class>(type_info, "Moon.HierarchyPerformanceTest", "BaselinePerfAnalyzer");
        }
        inline app::BaselinePerfAnalyzer* create() {
            return il2cpp::create_object<app::BaselinePerfAnalyzer>(get_class());
        }
    } // namespace BaselinePerfAnalyzer
} // namespace app::classes::types
