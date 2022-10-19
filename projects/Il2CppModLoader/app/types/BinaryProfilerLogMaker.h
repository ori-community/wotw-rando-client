#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryProfilerLogMaker {
        inline app::BinaryProfilerLogMaker__Class** type_info = (app::BinaryProfilerLogMaker__Class**)(modloader::win::memory::resolve_rva(0x0477D548));
        inline app::BinaryProfilerLogMaker__Class* get_class() {
            return il2cpp::get_class<app::BinaryProfilerLogMaker__Class>(type_info, "", "BinaryProfilerLogMaker");
        }
        inline app::BinaryProfilerLogMaker* create() {
            return il2cpp::create_object<app::BinaryProfilerLogMaker>(get_class());
        }
    } // namespace BinaryProfilerLogMaker
} // namespace app::classes::types
