#pragma once
#include <Modloader/app/structs/BinaryProfilerLogMaker.h>
#include <Modloader/app/structs/BinaryProfilerLogMaker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryProfilerLogMaker {
        inline app::BinaryProfilerLogMaker__Class** type_info() {
            static app::BinaryProfilerLogMaker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryProfilerLogMaker__Class**)(modloader::win::memory::resolve_rva(0x0477D548));
            }
            return cache;
        }
        inline app::BinaryProfilerLogMaker__Class* get_class() {
            return il2cpp::get_class<app::BinaryProfilerLogMaker__Class>(type_info(), "", "BinaryProfilerLogMaker");
        }
        inline app::BinaryProfilerLogMaker* create() {
            return il2cpp::create_object<app::BinaryProfilerLogMaker>(get_class());
        }
    } // namespace BinaryProfilerLogMaker
} // namespace app::classes::types
