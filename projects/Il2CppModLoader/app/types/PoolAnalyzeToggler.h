#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PoolAnalyzeToggler {
        namespace {
            inline app::PoolAnalyzeToggler__Class* type_info_ref = nullptr;
        }
        inline app::PoolAnalyzeToggler__Class** type_info = &type_info_ref;
        inline app::PoolAnalyzeToggler__Class* get_class() {
            return il2cpp::get_class<app::PoolAnalyzeToggler__Class>(type_info, "", "PoolAnalyzeToggler");
        }
        inline app::PoolAnalyzeToggler* create() {
            return il2cpp::create_object<app::PoolAnalyzeToggler>(get_class());
        }
    } // namespace PoolAnalyzeToggler
} // namespace app::classes::types
