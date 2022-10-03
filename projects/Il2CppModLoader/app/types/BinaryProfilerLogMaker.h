#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryProfilerLogMaker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryProfilerLogMaker__Class** type_info;
        inline app::BinaryProfilerLogMaker__Class* get_class() {
            return il2cpp::get_class<app::BinaryProfilerLogMaker__Class>(type_info, "", "BinaryProfilerLogMaker");
        }
        inline app::BinaryProfilerLogMaker* create() {
            return il2cpp::create_object<app::BinaryProfilerLogMaker>(get_class());
        }
    } // namespace BinaryProfilerLogMaker
} // namespace app::classes::types
