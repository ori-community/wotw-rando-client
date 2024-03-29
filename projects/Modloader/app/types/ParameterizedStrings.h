#pragma once
#include <Modloader/app/structs/ParameterizedStrings.h>
#include <Modloader/app/structs/ParameterizedStrings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterizedStrings {
        inline app::ParameterizedStrings__Class** type_info() {
            static app::ParameterizedStrings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParameterizedStrings__Class**)(modloader::win::memory::resolve_rva(0x047008C8));
            }
            return cache;
        }
        inline app::ParameterizedStrings__Class* get_class() {
            return il2cpp::get_class<app::ParameterizedStrings__Class>(type_info(), "System", "ParameterizedStrings");
        }
        inline app::ParameterizedStrings* create() {
            return il2cpp::create_object<app::ParameterizedStrings>(get_class());
        }
    } // namespace ParameterizedStrings
} // namespace app::classes::types
