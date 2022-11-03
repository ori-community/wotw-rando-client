#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolAnalyze {
        inline app::UberPoolAnalyze__Class** type_info = (app::UberPoolAnalyze__Class**)(modloader::win::memory::resolve_rva(0x04758CD8));
        inline app::UberPoolAnalyze__Class* get_class() {
            return il2cpp::get_class<app::UberPoolAnalyze__Class>(type_info, "", "UberPoolAnalyze");
        }
        inline app::UberPoolAnalyze* create() {
            return il2cpp::create_object<app::UberPoolAnalyze>(get_class());
        }
    } // namespace UberPoolAnalyze
} // namespace app::classes::types
