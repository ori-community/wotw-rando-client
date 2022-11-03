#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GasballChase {
        namespace {
            inline app::GasballChase__Class* type_info_ref = nullptr;
        }
        inline app::GasballChase__Class** type_info = &type_info_ref;
        inline app::GasballChase__Class* get_class() {
            return il2cpp::get_class<app::GasballChase__Class>(type_info, "", "GasballChase");
        }
        inline app::GasballChase* create() {
            return il2cpp::create_object<app::GasballChase>(get_class());
        }
    } // namespace GasballChase
} // namespace app::classes::types
