#pragma once
#include <Modloader/app/structs/ReplayValidatorData.h>
#include <Modloader/app/structs/ReplayValidatorData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplayValidatorData {
        inline app::ReplayValidatorData__Class** type_info() {
            static app::ReplayValidatorData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReplayValidatorData__Class**)(modloader::win::memory::resolve_rva(0x047690A8));
            }
            return cache;
        }
        inline app::ReplayValidatorData__Class* get_class() {
            return il2cpp::get_class<app::ReplayValidatorData__Class>(type_info(), "Moon.Race", "ReplayValidatorData");
        }
        inline app::ReplayValidatorData* create() {
            return il2cpp::create_object<app::ReplayValidatorData>(get_class());
        }
    } // namespace ReplayValidatorData
} // namespace app::classes::types
