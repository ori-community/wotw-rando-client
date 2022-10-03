#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnalyzeTypeIsResult__Enum {
        namespace {
            app::AnalyzeTypeIsResult__Enum__Class* type_info_ref = nullptr;
        }
        app::AnalyzeTypeIsResult__Enum__Class** type_info = &type_info_ref;
        inline app::AnalyzeTypeIsResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnalyzeTypeIsResult__Enum__Class>(type_info, "System.Linq.Expressions", "AnalyzeTypeIsResult");
        }
        inline app::AnalyzeTypeIsResult__Enum* create() {
            return il2cpp::create_object<app::AnalyzeTypeIsResult__Enum>(get_class());
        }
    } // namespace AnalyzeTypeIsResult__Enum
} // namespace app::classes::types
