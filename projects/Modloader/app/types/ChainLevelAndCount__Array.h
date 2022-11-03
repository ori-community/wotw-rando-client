#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChainLevelAndCount__Array {
        namespace {
            inline app::ChainLevelAndCount__Array__Class* type_info_ref = nullptr;
        }
        inline app::ChainLevelAndCount__Array__Class** type_info = &type_info_ref;
        inline app::ChainLevelAndCount__Array__Class* get_class() {
            return il2cpp::get_class<app::ChainLevelAndCount__Array__Class>(type_info, "Motvin.Collections", "ChainLevelAndCount[]");
        }
        inline app::ChainLevelAndCount__Array* create() {
            return il2cpp::create_object<app::ChainLevelAndCount__Array>(get_class());
        }
    } // namespace ChainLevelAndCount__Array
} // namespace app::classes::types
