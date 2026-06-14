#pragma once
#include <Modloader/app/structs/ChainValidationHelper.h>
#include <Modloader/app/structs/ChainValidationHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChainValidationHelper {
        inline app::ChainValidationHelper__Class** type_info() {
            static app::ChainValidationHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ChainValidationHelper__Class**)(modloader::win::memory::resolve_rva(0x04703A40));
            }
            return cache;
        }
        inline app::ChainValidationHelper__Class* get_class() {
            return il2cpp::get_class<app::ChainValidationHelper__Class>(type_info(), "Mono.Net.Security", "ChainValidationHelper");
        }
        inline app::ChainValidationHelper* create() {
            return il2cpp::create_object<app::ChainValidationHelper>(get_class());
        }
    } // namespace ChainValidationHelper
} // namespace app::classes::types
