#pragma once
#include <Modloader/app/structs/ReplayData.h>
#include <Modloader/app/structs/ReplayData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplayData {
        inline app::ReplayData__Class** type_info() {
            static app::ReplayData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReplayData__Class**)(modloader::win::memory::resolve_rva(0x04729598));
            }
            return cache;
        }
        inline app::ReplayData__Class* get_class() {
            return il2cpp::get_class<app::ReplayData__Class>(type_info(), "Moon.Race.Networking", "ReplayData");
        }
        inline app::ReplayData* create() {
            return il2cpp::create_object<app::ReplayData>(get_class());
        }
    } // namespace ReplayData
} // namespace app::classes::types
